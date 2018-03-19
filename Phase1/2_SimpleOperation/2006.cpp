//求奇数的乘积
#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int x;
		int plus=1;
		for(;n>0;n--){
			cin>>x;
			if(x%2!=0){
				plus*=x;
			}
		}
		cout<<plus<<endl;
	}
	return 0;
}