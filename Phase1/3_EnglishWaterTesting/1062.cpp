//Text Reverse
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	getchar();
	for(;T>0;T--){
		string line;
		getline(cin,line);
		string temp="";
		int i;
		for(i=0;i<line.length();i++){
			if(line[i]==' '){
				temp=temp+line[i];
				cout<<temp;
				temp="";
			}else if(i==line.length()-1){
				temp=line[i]+temp;
				cout<<temp;
			}else{
				temp=line[i]+temp;
			}
		}
		cout<<endl;

	}
	return 0;
}