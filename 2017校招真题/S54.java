/*
网格走法数目

题目描述
有一个X*Y的网格，小团要在此网格上从左上角到右下角，只能走格点且只能向右或向下走。请设计一个算法，计算小团有多少种走法。给定两个正整数int x,int y，请返回小团的走法数目。

输入描述:
输入包括一行，逗号隔开的两个正整数x和y，取值范围[1,10]。

输出描述:
输出包括一行，为走法的数目。
*/

import java.util.*;
public class S54{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int y = sc.nextInt();
		int a[][] = new int [11][11];
		a[0][0]=0;
		for(int i = 1;i<=x;i++){
			a[i][0] = 1;
		}
		for(int i = 1;i<=y;i++){
			a[0][i] = 1;
		}
		for(int i = 1;i<=x;i++){
			for(int j=1;j<=y;j++){
				a[i][j] = a[i][j-1]+a[i-1][j];
			}
		}
		System.out.println(a[x][y]);

		
	}
}