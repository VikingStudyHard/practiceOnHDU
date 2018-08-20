/*
删除公共字串

题目描述
输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。例如，输入”They are students.”和”aeiou”，则删除之后的第一个字符串变成”Thy r stdnts.”

输入描述:
每个测试输入包含2个字符串

输出描述:
输出删除后的字符串
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int la = a.length();
	int lb = b.length();
	for(int i = 0;i<la;i++){
		bool f = false;
		for(int j = 0;j<lb;j++){
			if(a[i]==b[j]){
				f = true;
				break;
			}
		}
		if(f==false){
			cout<<a[i];
		}
	}
	cout<<"\n";
	return 0;
}