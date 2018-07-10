//求平均成绩
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
	int n,m,count;
	
	while(~scanf("%d%d",&n,&m)){
		int a[50][5];
		float b[5];
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				scanf("%d",&a[i][j]);
			}
		}

		for(int i = 0;i < n;i++){
			double sum = 0;
			for(int j = 0;j < m;j++){
				sum += a[i][j];
			}
			if(i==0){
				printf("%.2f",sum/m);
			}else{
				printf(" %.2f",sum/m);
			}
		}

		cout<<endl;

		for(int j = 0;j < m;j++){
			double sum1 = 0;
			for(int i = 0;i < n;i++){		
				sum1 += a[i][j];
			}

			
			b[j]=sum1/n;

			if(j==0){
				printf("%.2f",sum1/n);
			}else{
				printf(" %.2f",sum1/n);
			}
		}

		cout<<endl;
		count=0;
		for(int i = 0;i < n;i++){
			int temp = 0;
			for(int j = 0;j < m;j++){
				if(a[i][j]>=b[j]){
					temp++;
				}
			}
			if(temp==m){
				count++;
			}
		}

		cout<<count<<endl<<endl;
	}
	return 0;
}