#include<iostream>
using namespace std;
int f(int n,int x){
	int sum = 0;
	while(n){
		sum = sum + n % x;
		n = n / x;
	}
	return sum;
}

int main(){
	int n;
	while(~scanf("%d",&n) && n){
		int sum1 = f(n,16);
		int sum2 = f(n,12);
		int sum3 = f(n,10);
		if(sum1 == sum2 && sum2 ==sum3){
			printf("%d is a Sky Number.\n",n);
		}else{
			printf("%d is not a Sky Number.\n",n);
		}

	}
	return 0;
}