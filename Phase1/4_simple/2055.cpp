#include<iostream>
#include<ctype.h>
using namespace std;



int main(){
	int t;
	scanf("%d",&t);
	
	while(t--){
		getchar();
		int sum;
		int y;
		char x;
		scanf("%c %d",&x,&y);
		if(isupper(x)){
			sum = y + x - 64;
		}
		if(islower(x)){
			sum = y - (toupper(x)-64);
		}
		printf("%d\n",sum);
	}
	return 0;
}