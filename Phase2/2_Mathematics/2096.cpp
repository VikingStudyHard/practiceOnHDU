#include<iostream>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int aa,bb;
		aa = a % 100;
		bb = b % 100;
		int result = (aa+bb)%100;
		cout<<result<<endl;
	}
	return 0;
}