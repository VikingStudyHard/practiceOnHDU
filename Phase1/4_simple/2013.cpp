//蟠桃记
#include<iostream>
using namespace std;
int main(){
	int n;
	int result;
	while(cin>>n){
		if(n<30 && n>1){
			int x = 1;
			for(int i = 2;i<=n;i++){
				x=(x+1)*2;
			}
			cout<<x<<endl;

		}
	}

}