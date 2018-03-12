//A+B for Input-Output Practice (VI)
#include <iostream>
using namespace std;
int main(){
	int num,x;
	while(cin>>num){
		int sum = 0;
		for(;num>0;num--){
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
	}
	return 0;
}