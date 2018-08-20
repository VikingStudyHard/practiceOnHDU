/*
素数对

题目描述
给定一个正整数，编写程序计算有多少对质数的和等于输入的这个正整数，并输出结果。输入值小于1000。
如，输入为10, 程序应该输出结果为2。（共有两对质数的和为10,分别为(5,5),(3,7)）

输入描述:
输入包括一个整数n,(3 ≤ n < 1000)

输出描述:
输出对数
*/

import java.util.Scanner;
public class S43{
	public static void main(String[] args){
		int arr[] = new int[1000];
		int len = arr.length;
		for(int i = 1;i<len;i++){
			arr[i] = 0;
		}
		for(int i = 2;i<len;i++){
			for(int j = 2;j<len/i;j++){
				arr[i*j] = 1;
			}
		}
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int count = 0;
		for(int i = 2;i < a;i++){
			if(arr[i]==0 && arr[a-i]==0){
				if(i*2 ==a){
					count += 2;
				}else{
					count++;
				}
				
				//System.out.println(i + " " +(a-i));
			}
		}
		System.out.println(count/2);
	}
}