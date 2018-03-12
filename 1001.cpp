//Sum Problem
#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n%2==0){
			cout<<n/2*(1+n)<<endl<<endl;
		}else{
			cout<<(1+n)/2*n<<endl<<endl;
		}
		
	}

}
//You may assume the result will be in the range of 32-bit signed integer.
//32位有符号整数范围： - 2^31 ~ 2^31 - 1
//(1+n)*n有可能大于 2^31-1
//不能放在一起相乘