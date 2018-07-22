#include<iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char c;
	while(n--){
		
		int sum = 0;	
		while((c= getchar())!= '\n'){
			if(c < 0){
				sum++;
			}
		}
		printf("%d\n",sum/2);
	}
	return 0;
}