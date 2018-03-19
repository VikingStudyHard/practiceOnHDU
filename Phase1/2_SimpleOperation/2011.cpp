//多项式求和
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int m,n;
	cin>>m;
	if(m<100){
		for(;m>0;m--){
			cin>>n;
			if(n<1000){
				double sum=0;
				for(int i=1;i<=n;i++){
					if(i%2!=0){
						sum += (1.0/i);  //1.0啊啊啊啊 不然除完都是零啊
					}else{
						sum -= (1.0/i);
					}
				}
				cout<<fixed<<showpoint<<setprecision(2)<<sum<<endl;
			}
		}
	}
}