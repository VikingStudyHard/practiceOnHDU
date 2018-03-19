//数值统计
#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		double a=0,b=0,c=0;
		if(n==0){
			return 0;
		}
		if(n<100&&n>0){
			double x;
			for(;n>0;n--){
				cin>>x;
				if(x==0){
					b++;
				}else if(x<0){
					a++;
				}else{
					c++;
				}
			}
		}
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}