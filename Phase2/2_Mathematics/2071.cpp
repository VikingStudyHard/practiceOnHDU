#include<iostream>
using namespace std;
int main(){

	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		
		double arr[101];
		for(int i = 0;i < n;i++){
			scanf("%lf",&arr[i]);
		}
		double max = 0.0;
		for(int i = 0;i < n;i++){
			if(max < arr[i]){
				max =  arr[i];
			}
		}
		printf("%.2lf\n",max);
		
	}
	return 0;
}