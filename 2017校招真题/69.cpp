/*
数串

题目描述
设有n个正整数，将他们连接成一排，组成一个最大的多位整数。
如:n=3时，3个整数13,312,343,连成的最大整数为34331213。
如:n=4时,4个整数7,13,4,246连接成的最大整数为7424613。

输入描述:
有多组测试样例，每组测试样例包含两行，第一行为一个整数N（N<=100），第二行包含N个数(每个数不超过1000，空格分开)。

输出描述:
每组数据输出一个表示最大的整数。
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
bool cmp(string s1,string s2){
	int l1 = s1.length();
	int l2 = s2.length();
	if(l1 > l2 && s1.substr(0,l2) == s2){

		for(int i = l2;;i++){
			if(s1[i]<s2[0]){
				return false;
			}else if(s1[i]==s2[0]){
				continue;
			}else{
				return true;
			}
		}     
	}else if(l2 > l1 && s2.substr(0,l1) == s1){
		for(int i = l1;;i++){
			if(s2[l1]<s1[0]){
				return true;
			}else if(s1[i]==s2[0]){
				continue;
			}else{
				return false;
			}
		}
	}else{
		return s1 > s2;
	}

}

int main(){

	int n;
	string s[101];

	while(~scanf("%d",&n)){
		for(int i = 0; i < n;i++){
			cin>>s[i];
		}
		sort(s,s+n,cmp);
		for(int i = 0; i < n;i++){
			cout<<s[i];
		}
		cout<<endl;
	}

	return 0;
}



	// 7776 放 7 之后
	// 7779 放 7 之前
	// 936 放 93 之后 
	// 346 放 34 之前