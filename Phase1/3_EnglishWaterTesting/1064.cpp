//Financial Management
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double sum = 0.0;
	for(int i = 12;i>0;i--){
		double input;
		cin>>input;
		sum += input;
	}
	cout<<'$'<< fixed << showpoint << setprecision(2) << sum/12.00 << endl;
	return 0;
}