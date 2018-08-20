/*
彩色宝石项链

题目描述
有一条彩色宝石项链，是由很多种不同的宝石组成的，包括红宝石，蓝宝石，钻石，翡翠，珍珠等。有一天国王把项链赏赐给了一个学者，并跟他说，你可以带走这条项链，但是王后很喜欢红宝石，蓝宝石，紫水晶，翡翠和钻石这五种，我要你从项链中截取连续的一小段还给我，这一段中必须包含所有的这五种宝石，剩下的部分你可以带走。如果无法找到则一个也无法带走。请帮助学者找出如何切分项链才能够拿到最多的宝石。

输入描述:
我们用每种字符代表一种宝石，A表示红宝石，B表示蓝宝石，C代表紫水晶，D代表翡翠，E代表钻石，F代表玉石，G代表玻璃等等，我们用一个全部为大写字母的字符序列表示项链的宝石序列，注意项链是首尾相接的。每行代表一种情况。

输出描述:
输出学者能够拿到的最多的宝石数量。每行一个
*/



import java.util.*;
//import java.util.Arrays;
public class S62{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		String s = str+str;
		int len = str.length();

		int sum = len;
		int arr[] = new int[len];
		for(int i = 0;i<len;i++){
			boolean a = false;
			boolean b = false;
			boolean c = false;
			boolean d = false;
			boolean e = false;
			for(int j = 0;j<len*2-i;j++){
				if(s.charAt(i+j)=='A'){
					a = true;
					//System.out.println("A "+j);
				}
				if(s.charAt(i+j)=='B'){
					b = true;
					//System.out.println("B "+j);
				}
				if(s.charAt(i+j)=='C'){
					c = true;
					//System.out.println("C "+j);
				}
				if(s.charAt(i+j)=='D'){
					d = true;
					//System.out.println("D "+j);
				}
				if(s.charAt(i+j)=='E'){
					e = true;
					//System.out.println("E "+j);
				}
				if(a && b && c && d && e){
					//System.out.println(i+" "+j+"\n");
					sum = j+1;
					break;
				}

			}
			arr[i] = len - sum;
		}
		Arrays.sort(arr);
		System.out.println(arr[len-1]);
	}
}