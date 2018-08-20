/*
集合
题目描述
给你两个集合，要求{A} + {B}。 注：同一个集合中不会有两个相同的元素。
输入描述:
每组输入数据分为三行,第一行有两个数字n,m(0 ≤ n,m ≤ 10000)，分别表示集合A和集合B的元素个数。后两行分别表示集合A和集合B。每个元素为不超过int范围的整数,每个元素之间有个空格隔开。
输出描述:
针对每组数据输出一行数据，表示合并后的集合，要求从小到大输出，每个元素之间有一个空格隔开,行末无空格。
*/
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int al = n+m;
	int *arr = new int[al+1];
	int tmp;
	for(int i = 0;i < al;i++){

		scanf("%d",&tmp);
		arr[i] = tmp;
	}
	sort(arr,arr+al);
	cout<<arr[0];
	for(int i = 1;i < al;i++){
		if(arr[i]!=arr[i-1]){
			cout<<" "<<arr[i];
		}
	}
	cout<<endl;
	return 0;
}