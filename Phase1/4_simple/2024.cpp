//标识符由字母、下划线、数字这三个方面组成，但开头必须是字母或下划线。
#include <iostream>
#include <cstdio>
#include <ctype.h>

using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int i = 0;i < n;i++){
		char str[50];
		gets(str);
		if(str[0]=='_' || isalpha(str[0])!=0){
			int j;
			for(j = 1;j < strlen(str); j++){
				if(isalnum(str[j])!=0 || str[j]=='_'){
					continue;
				}else{
					break;
				}
			}
			if(j==strlen(str)){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}else{
			printf("no\n");
		}
	}
	return 0;
}