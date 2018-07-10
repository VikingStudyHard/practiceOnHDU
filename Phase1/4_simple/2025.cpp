#include<iostream>
#include<cstdio>
#include<ctype.h>

using namespace std;

int main(){
	char string[100];
	while(gets(string)){
		char max = string[0];
		for(int i = 0;i < strlen(string); i++){
			if(string[i]>max){
				max = string[i];
			}
		}
		for(int i = 0;i < strlen(string); i++){
			printf("%c",string[i]);
			if(max == string[i]){
				printf("(max)");
			}
		}
		printf("\n");
	}

	return 0;
}