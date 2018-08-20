#include<iostream>
using namespace std;
int main()
{
	long long  const MAX = 2147483647+1;
	long long  a[MAX];
	for(int i = 0;i<MAX;i++){
		a[i]=0;
	}
	for(int i = 2;i<MAX;i++){
		for(int j = 2;j<(MAX)/i;j++){
			a[i*j]=1;
		}
	}
	int n;
	while(~scanf("%d",&n)){
		int sum = 0;
		while(n--){
			int t;
			scanf("%d",&t);
			if(a[t]==0){
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}