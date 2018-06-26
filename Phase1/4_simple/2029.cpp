//Palindromes _easy version
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	getchar();
	for(int i = 0;i < n;i++){
		string line;
		getline(cin,line);
		int length = line.length();
		int count = 0;
		for(int j =0;j < length/2;j++){
			if(line[j]==line[length-1-j]){
				count++;
			}
		}
		if(count==length/2){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}

	}     
}