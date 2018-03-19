//求绝对值
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	double a;
	while(cin>>a){
		cout<<fixed<<showpoint<<setprecision(2)<<abs(a)<<endl;
	}
	return 0;
}