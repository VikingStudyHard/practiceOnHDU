/*
统计字符

题目描述
给定一个英文字符串,请写一段代码找出这个字符串中首先出现三次的那个英文字符(需要区分大小写)。

输入描述:
输入数据一个字符串，包括字母,数字等。

输出描述:
输出首先出现三次的那个英文字符
*/
import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
public class S60{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			String line = sc.nextLine();
			Map<Character,Integer> m = new HashMap<Character,Integer>();
			char arr[] = line.toCharArray();
			for(int i = 0;i<line.length();i++){
				if((arr[i]>='A' && arr[i]<='Z')||(arr[i]>='a' && arr[i]<='z')){
					try{
						int value = m.get(arr[i]);
						value ++;
						m.put(arr[i],value);
						if(value == 3){
							System.out.println(arr[i]);
							break;
						}
					}catch(Exception e){
						m.put(arr[i],1);
					}
					//System.out.println(arr[i]+" " +m.get(arr[i]) );
				}
			}
		}
	}
}