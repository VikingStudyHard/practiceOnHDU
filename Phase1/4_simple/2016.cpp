//数据的交换输出
#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0){
			return 0;
		}else{
			int array[100];
			for(int i = 0;i<n;i++){
				cin >> array[i];
			}
			int mix=array[0];
			int index = 0;
			for(int i=0;i<n;i++){
				if(mix>array[i]){
					mix=array[i];
					index=i;
				}
			}
			int temp = array[0];
			array[0]=array[index];
			array[index]=temp;
			for(int i = 0;i<n-1;i++){
				cout<<array[i]<<" ";
			}
			cout<<array[n-1]<<endl;
		}
	}
}