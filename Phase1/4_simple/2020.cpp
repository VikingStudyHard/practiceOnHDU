//绝对值排序
#include<iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0){
			return 0;
		}else{
			int x;
			int array[101];
			for(int i = 0;i < n; i ++){
				cin>>x;
				array[i]=x;
			}

			//冒泡排序

			for(int i=n-1;i>0;i--){
				for(int j=1;j<=i;j++){
					if(abs(array[j-1])<abs(array[j])){
						int temp;
						temp = array[j-1];
						array[j-1] = array[j];
						array[j] = temp;
					}
				}
			}

			for(int i = 0;i < n-1; i ++){
				cout<<array[i]<< " ";
			}
			cout<<array[n-1]<<endl;

		}
	}
}