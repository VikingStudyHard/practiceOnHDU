/*
拼凑面额

题目描述
给你六种面额1、5、10、20、50、100元的纸币，假设每种币值的数量都足够多，编写程序求组成N元（N为0-10000的非负整数）的不同组合的个数。

输入描述:
输入为一个数字N，即需要拼凑的面额

输出描述:
输出也是一个数字，为组成N的组合个数。
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p[6] = {1,5,10,20,50,100};
	long long  * a = new long long [n+1];
	for(int i = 0;i<=n;i++){
		a[i] = 1;
	}
	for(int i = 1;i<6;i++){
		for(int j = 0;j<=n;j++){
			if(j < p[i]){
				a[j]=a[j];
			}else if(j == p[i]){
				a[j]=a[j]+1;
			}else{
				a[j]=a[j]+a[j-p[i]];
			}
		}
	}
	cout<<a[n]<<endl;
	return 0;
}





