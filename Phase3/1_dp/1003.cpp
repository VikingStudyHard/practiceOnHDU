#include <iostream>
using namespace std;
int main(){
	int t,n;
	scanf("%d",&t);
	int a[100005];//存储序列
    int sum[100005];//存储以每个数为结尾的子序列和
    int s[100005];//存储开始位置
    int ans;//结束位置
    int i;
    for(i = 1 ;i <= t;i++){
    	scanf("%d",&n);
    	for(int i1=0;i1<n;i1++){
    		scanf("%d",&a[i1]);
    	}
    	ans=0;
    	sum[0]=a[0];
    	s[0]=0;
    	for(int j=1;j<n;j++){
    		if(sum[j-1]>=0){
    			sum[j]=sum[j-1]+a[j];
    			s[j]=s[j-1];
    		}else{
    			sum[j]=a[j];
    			s[j]=j;
    		}
    		if(sum[ans]<sum[j]){
    			ans=j;
    		}
    	}
    	if(i == 1){
    		printf("Case %d:\n%d %d %d\n",i,sum[ans],s[ans]+1,ans+1);
    	}else{
    		printf("\nCase %d:\n%d %d %d\n",i,sum[ans],s[ans]+1,ans+1);
    	}
    }
	return 0;
}
/*
以a[0]结尾的子序列只有a[0]
以a[1]结尾的子序列有 a[0]a[1]和a[1]
以a[2]结尾的子序列有 a[0]a[1]a[2] / a[1]a[2] / a[2]
……
以a[i]结尾的子序列有 a[0]a[1]……a[i-2]a[i-1]a[i]  / a[1]a[2]……a[i-2]a[i-1]a[i] /  a[2]a[3]……a[i-2]a[i-1]a[i] / …… /  a[i-1]a[i] / a[i]
 
*/

//sum[i]=max{sum[i-1]+a[i],a[i]}。