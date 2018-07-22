#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		int max,min;
		if(a>b){
			max = a;
			min = b;
		}else{
			max = b;
			min = a;
		}
		for(int i = 1;i<1000;i++){
			if((i*max)%min == 0){
				cout<<i*max<<endl;
				break;
			}
		}
	}
	return 0;
}