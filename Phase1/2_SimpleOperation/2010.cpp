//水仙花数
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
		if(m>=100 && m<=n && n<=999){
			int count = 0;
			for(int i =m ;i<=n;i++){
				int a =i/100;
				int b = (i-a*100)/10;
				int c = i-a*100-b*10;
				if((pow(a,3)+pow(b,3)+pow(c,3))==i){
					count++;
					if(count==1){
						cout<<i;
					}else{
						cout<<" "<<i;
					}
				}
			}
			if(count==0){
				cout<<"no"<<endl;
			}else{
				cout<<endl;
			}
		}
	}
}