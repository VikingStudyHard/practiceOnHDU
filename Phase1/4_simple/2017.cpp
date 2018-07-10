#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		string line;
		getline(cin,line);
		int count = 0;
		for(int i = 0;i<line.length();i++){
			if(line[i]<='9'&&line[i]>='0'){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}