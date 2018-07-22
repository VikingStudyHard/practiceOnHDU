#include<iostream>
using namespace std;
int main(){
	int dp[31][31];
	int n;
	while(cin>>n){
		int i,j;
		for(i = 1; i <= n; ++i){
			dp[i][i]=1;
			dp[i][1]=1;
		}
		for(i = 3;i <= n ; ++i){
			for(j = 2;j<i;++j){
				dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
			}
		}
		 for ( i=1; i<= n; ++i){
            printf("%d", dp[i][1]);
            for ( j=2; j<=i; ++j ){
                printf(" %d", dp[i][j]);
            }
            printf("\n");
        }
        printf("\n");

	}
	
	return 0;
}