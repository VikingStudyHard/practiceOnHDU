/*
数字翻转

题目描述
对于一个整数X，定义操作rev(X)为将X按数位翻转过来，并且去除掉前导0。例如:
如果 X = 123，则rev(X) = 321;
如果 X = 100，则rev(X) = 1.
现在给出整数x和y,要求rev(rev(x) + rev(y))为多少？

输入描述:
输入为一行，x、y(1 ≤ x、y ≤ 1000)，以空格隔开。

输出描述:
输出rev(rev(x) + rev(y))的值
*/

#include<iostream>
#include<sstream>
#include<string>
using namespace std;
string f(string str){
	int len = str.length();
	int zero = 0;
	for(int i = len-1;i >= 0;i--){
		if(str[i] == '0'){
			zero++;
		}else{
			break;
		}
	}
	int rest = len-zero;
	string nozero = str.substr(0,rest);
	string result = nozero;
	for(int i = 0;i<rest;i++){
		result[i]=nozero[rest-1-i];
	}
	return result;
}
int main(){
	string a,b;
	cin>>a>>b;
	stringstream stream,stream1,stream2;
	stream << f(a);
	int x;
	stream >> x;

	stream1 << f(b);
	int y;
	stream1 >> y;

	int sum = x + y;

	stream2 << sum;
	string str;
	stream2 >> str;
	cout<<f(str)<<endl;
	return 0;
}