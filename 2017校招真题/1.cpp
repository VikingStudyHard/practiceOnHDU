/*	合唱团
题目描述
有 n 个学生站成一排，每个学生有一个能力值，牛牛想从这 n 个学生中按照顺序选取 k 名学生，要求相邻两个学生的位置编号的差不超过 d，使得这 k 个学生的能力值的乘积最大，你能返回最大的乘积吗？

输入描述:
每个输入包含 1 个测试用例。每个测试数据的第一行包含一个整数 n (1 <= n <= 50)，表示学生的个数，接下来的一行，包含 n 个整数，按顺序表示每个学生的能力值 ai（-50 <= ai <= 50）。接下来的一行包含两个整数，k 和 d (1 <= k <= 10, 1 <= d <= 50)。

输出描述:
输出一行表示最大的乘积。
*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n,k,d;
	long long minleft;
	int a[51];
	while(~scanf("%d",&n)){
		for(int i = 1;i <= n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d %d",&k,&d);

		long long dp[51][51];
		long long mix[51][51];
		for(int i = 1;i<=n;i++){
			dp[1][i] = a[i];
			mix[1][i] = a[i];
		}
		for(int i = 2;i<=k;i++){
			for(int j = i;j<=n;j++){

				minleft = max(i-1,j-d);
				if(a[j]>0){


					long long max = dp[i-1][minleft];
					for(int left = minleft;left<=j-1;left++){
						if(dp[i-1][left]>max){
							max = dp[i-1][left];
						}
					}
					dp[i][j]=a[j]*max;



					long long min = mix[i-1][minleft];
					for(int left = minleft;left<=j-1;left++){
						if(mix[i-1][left]<min){
							min = mix[i-1][left];
						}
					}
					mix[i][j]=a[j]*min;



				}else if(a[j]<0){


					long long min = mix[i-1][minleft];
					for(int left = minleft;left<=j-1;left++){
						if(mix[i-1][left]<min){
							min = mix[i-1][left];
						}
					}
					dp[i][j]=a[j]*min;



					long long max = dp[i-1][minleft];
					for(int left = minleft;left<=j-1;left++){
						if(dp[i-1][left]>max){
							max = dp[i-1][left];
						}
					}
					mix[i][j]=a[j]*max;



				}else{
					dp[i][j]=0;
				}
			}
		}
		long long result = 0;
		for(int i = k;i<=n;i++){
			if(dp[k][i]>result){
				result = dp[k][i];
			}
		}
		cout<<result<<endl;

		// for(int i = 1;i<=k;i++){
		// 	for(int j = i;j<=n;j++){
		// 		cout<<dp[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }



	}
	return 0;
}



/*


一共选i个人（1<=i<=k）,dp[i][j]表示从前j个人中选择i个人，其中最后一个人是第j个人，倒数第二个人是第left人。
max{i-1,j-d}<=left<=j-1

若当前人分数即a[j]>0,dp[i][j]=max{dp[i-1][left]}*a[j]；
若当前人分数即a[j]<0,dp[i][j]=min{mix[i-1][left]}*a[j]；

其中负数时，要找前几个里乘积最小的，所以要维护mix数组，和dp正好相反


数特别大。。。得用long long
*/


