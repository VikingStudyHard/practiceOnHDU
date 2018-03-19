//平方和与立方和
#include <iostream>
using namespace std;
int main(){
	int m,n,temp;
	while(cin>>m>>n){
		int x=0;
		int y=0;
		if(m > n){     // 保证m<=n，以便控制循环  
            temp = m;  
            m = n;  
            n = temp;  
        } 
		for(int i=m;i<=n;i++){
			if(i%2==0){
				x+=i*i;
			}else{
				y+=i*i*i;
			}
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}