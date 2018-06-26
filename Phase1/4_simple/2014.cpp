//青年歌手大奖赛_评委会打分
#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;
int main(){
	int n;
	while(cin>>n){
		int *array= new int[n];
		for(int i = 0;i < n;i++){
			cin>>array[i];
		}
		for(int j =0; j<n;j++){
			for(int i = 0;i<n-j-1;i++){
				if(array[i]>array[i+1]){
					int temp;
					temp=array[i];
					array[i]=array[i+1];
					array[i+1]=temp;
				}
			}
		}

		double sum=0;
		for(int i = 1;i < n-1;i++){
			sum+=array[i];
		}
		cout << fixed << showpoint << setprecision(2)<< sum/(n-2) <<endl;
		delete[] array;
		
	}
	// cin > scanf()
	// cout > printf()
}