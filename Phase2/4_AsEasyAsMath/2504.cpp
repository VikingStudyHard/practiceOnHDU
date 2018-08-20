#include<iostream>
using namespace  std;
long long gcd(long long a,long long b)
{
	return b==0? a:gcd(b,a%b); 
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a,b,c;
		scanf("%lld %lld",&a,&b);
		c=2*b;
		while(gcd(a,c)!=b){
			c+=b;
		}
		printf("%lld\n",c);
	}
	return 0;
}