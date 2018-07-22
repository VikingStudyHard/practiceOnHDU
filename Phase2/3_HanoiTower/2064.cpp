//汉诺塔
#include <iostream>
using namespace std;
long long f(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 2;
	}
	return 3*f(n-1)+2;
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		cout<<f(n)<<endl;
	}
	
	return 0;
}
/*
若移动k个圆盘从第一根柱子到第三根柱子需要Fun(k)次移动，
那么，先移动K-1个圆盘到第三根柱子需要Fun(k-1)次移动，
再将最大的圆盘移动到中间柱子需要1次移动，
然后将k-1个圆盘移动回第一根柱子同样需要Fun(k-1)次移动，
移动最大的盘子到第三根柱子需要1次移动，
最后将k-1个圆盘也移动到第三根柱子需要Fun(k-1)次移动，
这样递归公式就是Fun(k)=3*Fun(k-1)+2。
而递归的出口是k=1时，F(1)=2
*/