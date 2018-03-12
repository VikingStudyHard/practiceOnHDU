//A+B for Input-Output Practice (VIII)
#include <iostream>
using namespace std;
int main(){
	int line,num,x;
	cin>>line;
	for(;line>0;line--){
		int sum = 0;
		cin>>num;
		for(;num>0;num--){
			cin>>x;
			sum+=x;
		}
		if(line==1){
			cout<<sum<<endl;
		}else{
			cout<<sum<<endl<<endl;
		}
	}
	return 0;
}