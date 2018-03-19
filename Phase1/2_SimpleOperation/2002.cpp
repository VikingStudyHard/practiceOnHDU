//计算球体积
#include <iostream>
#include<math.h>
#include<iomanip>
#define PI 3.1415927
using namespace std;
int main(){
	double r;
	while(cin>>r){
		cout<<fixed<<showpoint<<setprecision(3)<<4*PI*pow(r,3)/3<<endl;
	}
	return 0;
}