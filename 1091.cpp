//A+B for Input-Output Practice (III)
#include <iostream>
using namespace std;
int main(){
	int i,j;
	while(cin>>i>>j){
		if(i==0 && j==0){
			return 0;
		}else{
			cout<< i+j <<endl;
		}
	}
	return 0;
}