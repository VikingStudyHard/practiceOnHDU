//A+B for Input-Output Practice (V)
#include <iostream>
using namespace std;
int main(){
	int line,num,x;
	cin>>line;
	while(line>0){
		cin>>num;
		int sum = 0;
		for(;num>0;num--){
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
		line--;
	}
	return 0;
}