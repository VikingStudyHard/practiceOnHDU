//偶数求和
#include<iostream>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m){
		int *array = new int[n];
		for(int i =0;i<n;i++){
			array[i]=2*i+2;
			//cout<<array[i];
		}
		//cout<<endl;
		int temp = n/m;
		//cout<<temp<<endl;
		int remainder = n%m;
		//cout<<remainder<<endl;
		if(remainder==0){
			for(int i =0;i<temp-1;i++){
				cout<<(array[m*i]+array[m*i+m-1])/2<<" ";	
			}
			cout<<(array[m*(temp-1)]+array[m*temp-1])/2<<endl;	
		}else{
			for(int i =0;i<temp;i++){
				cout<<(array[m*i]+array[m*i+m-1])/2<<" ";	
			}
			cout<<(array[m*temp]+array[n-1])/2<<endl;
		}
		delete[] array;
	}

}
