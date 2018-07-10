#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	while(~scanf("%d",&n)){

		int *array=new int[n];
		for(int i = 0;i < n;i++){
			scanf("%d",&array[i]);
		}

		sort(array,array+n);
		int max = array[n-1];
		for(int j = 1;;j++){
			int flag = 0;
			int temp = max * j;

			for(int x =n-2;x >= 0;x--){		
				if(temp % array[x]!=0){
					break;
				}else{
					flag++;
				}
			}
			if(flag==n-1){
				cout<<temp<<endl;
				break;
			}
		}

		delete array;
	}

	return 0;
}