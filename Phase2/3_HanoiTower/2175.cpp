//汉诺塔
#include <iostream>
using namespace std;
int main(){
	int n;
	long long m,k;
	while(~scanf("%d%lld",&n,&m) && n!=0 && m!=0){
		k = 1;
		while(m % 2 != 1)
        {
            k++;
            m /= 2;
        }
        printf("%lld\n", k);
	}


	return 0;
}