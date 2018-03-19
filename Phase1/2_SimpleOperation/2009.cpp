//求数列的和
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	double n;
	int m;
	while(cin>>n>>m){
		if(n>0&&n<10000&&m>0&&m<1000){
			double sum=n;
			m--;
			for(;m>0;m--){
				n=sqrt(n);
				sum+=n;
			}
			cout<<fixed<<showpoint<<setprecision(2)<<sum<<endl;
		}
	}
	return 0;
}