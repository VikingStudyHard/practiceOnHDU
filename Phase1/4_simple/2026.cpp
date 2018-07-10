#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
	char str[100];
	while(gets(str)){
		printf("%c",toupper(str[0]));
		for(int i =1;i<strlen(str);i++){
			if(str[i-1]==' '){
				printf("%c",toupper(str[i]));
			}else{
				printf("%c",str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}