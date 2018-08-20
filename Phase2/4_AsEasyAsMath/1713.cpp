#include <iostream>
using namespace std;

long long f(long long m,long long n){//最大公约数
	if(n==0){
		return m;
	}else{
		return f(n,m%n);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b,c,d;
		scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);
		long long x1 = f(a*d,c*b);//最大公约数
		long long y = b*d;
		long long x = a*c*y/x1;//最小公倍数
		if(x%y==0){
			cout<<x/y<<endl;
		}else{
			long long z = f(x,y);
			cout<< x/z <<"/"<<y/z<<endl;
		}
	}
	return 0;
}