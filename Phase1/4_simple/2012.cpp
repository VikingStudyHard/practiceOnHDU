//素数判定
#include <iostream>
using namespace std;
int main(){
	//素数数组
	int const MAX =2600;
	int n[MAX];
	for(int i = 0;i<MAX-1;i++){
		n[i]=0;
	}
	n[0]=1;
	n[1]=1;
	for(int i = 2;i<MAX-1;i++){
		for(int j=2;j<=(MAX-1)/i;j++){
			n[i*j]=1;//合数
		}
	}
	int x,y;
	while(cin>>x>>y){
		if(x==0 && y==0){
			return 0;
		}
		if(x >= -39 && y<= 50 && x<y){
			int count = 0;
			for(int i=x;i<=y;i++){
				int result = i*i+i+41;
				if(n[result]==0){//质数
					count++;
				}
			}
			if(count==(y-x+1)){
				cout<<"OK"<<endl;
			}else{
				cout<<"Sorry"<<endl;
			}
		}
	}
}
