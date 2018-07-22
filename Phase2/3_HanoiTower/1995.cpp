//汉诺塔
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	__int64 a[61];
	memset(a,0,sizeof(a));
	a[1]= 1;
	for(int i = 2;i<61;i++){
		a[i] = a[i-1]*2;
	}
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		cout<< a[n-k+1]<<endl;

	}
	
	return 0;
}