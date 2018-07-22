#include <iostream>
using namespace std;
int main()
{
	int a[10002];
	for(int i = 0;i< 10001;i++){
		a[i] = 1;
	}
	a[0] = 0;
	a[1] = 0;
	for(int i = 2;i < 10001;i++){
		for(int j = 2;j <= 10001/i;j++){
			a[i*j] = 0;
		}
	}
	int x;
	while(~scanf("%d",&x) && x){
		int count = 0;
		for(int i = 1;i < x;i++){
			if(a[i] == 1 && (a[x-i] == 1)){
				count++;
			}
		}
		cout<<count/2<<endl;
	}
	return 0;
}