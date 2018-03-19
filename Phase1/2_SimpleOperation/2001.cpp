//计算两点间的距离
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	double x1,x2,y1,y2;
	while(cin>>x1>>y1>>x2>>y2){
		cout<< fixed << showpoint << setprecision(2) <<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<<endl;
	}
	return 0;
}