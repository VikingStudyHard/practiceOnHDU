//汉诺塔
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	long long a[30];
	a[1]= 3;
	for(int i = 2;i < 30;i++){
		a[i]=a[i-1]*3;
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		cout<<a[n]<<endl;
	}
	
	return 0;
}