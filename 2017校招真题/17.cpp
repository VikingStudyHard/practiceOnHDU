/*
Fibonacci数列
题目描述
Fibonacci数列是这样定义的：
F[0] = 0
F[1] = 1
for each i ≥ 2: F[i] = F[i-1] + F[i-2]
因此，Fibonacci数列就形如：0, 1, 1, 2, 3, 5, 8, 13, ...，在Fibonacci数列中的数我们称为Fibonacci数。给你一个N，你想让其变为一个Fibonacci数，每一步你可以把当前数字X变为X-1或者X+1，现在给你一个数N求最少需要多少步可以变为Fibonacci数。

输入描述:
输入为一个正整数N(1 ≤ N ≤ 1,000,000)

输出描述:
输出一个最小的步数变为Fibonacci数
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long f[50];
	f[0]= 0;
	f[1]= 1;
	
	int i;
	for( i =2;;i++){
		f[i]=f[i-1]+f[i-2];
		if(f[i]>1000000){
			break;
		}
	}

	long long n;
	scanf("%lld",&n);
	int j;
	for(j = 0;j <= i;j++){
		if(f[j]<n){
			continue;
		}else if(f[j] > n){
			break;
		}else{
			cout<<0<<endl;
			return 0;
			break;
		}
	}
	cout << min((f[j] - n),(n - f[j-1])) << endl;
	return 0;
}