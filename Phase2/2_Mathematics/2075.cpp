#include <iostream>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		if(a%b==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		
	}
	

	return 0;
}