#include<iostream>
#include<stdio.h>
#include<string>
#include<set>
using namespace std;
int main(){
	char str[1000];
	while(gets(str) && str[0] != '#'){
		
		set<string> words;
		char s[2] =" ";
		char *token;
		token = strtok(str,s);

		while(token != NULL){
			words.insert(token);
			token = strtok(NULL,s);
		}
		cout<<words.size()<<endl;
	}
	return 0;
}