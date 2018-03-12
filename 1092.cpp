//A+B for Input-Output Practice (IV)
#include <iostream>
using namespace std;
int main(){
	int num,x;
	while(cin>>num){
		int sum=0;
		if(num>0){
			for(;num>0;num--){
				cin>>x;
				sum+=x;
			}
			cout<<sum<<endl;
		}else{
			return 0;
		}
	}
	return 0;
}