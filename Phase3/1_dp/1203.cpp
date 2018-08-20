#include <iostream>
#include <stdio.h>
using namespace std;
double min(double a,double b)
{
    return a<b?a:b;
}
int main(){
	int n,m;	
	int d[10000]; // 学费
	double p[10000]; // 拿到的概率
	double c[10000]; // 拿不到的概率
	double dp[10000]; // 
	while(scanf("%d %d",&n,&m) && (m||n)){
		for(int i = 1;i <= m;i++){
			scanf("%d %lf",&d[i],&p[i]);
			c[i] = 1.0 - p[i];
		}
		for(int i = 0;i <= n;i++){
			dp[i] = 1.0;
		}
		for(int i = 1;i <= m;i++){
			for(int j = n;j >= d[i];j--){
				dp[j] = min(dp[j-d[i]]*c[i],dp[j]);
			}
		}
		printf("%.1lf%%\n",(1-dp[n])*100);
	}
	return 0;

}
