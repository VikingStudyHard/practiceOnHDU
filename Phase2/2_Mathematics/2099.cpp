#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b) && a != 0 && b != 0){
		int flag = 0;
		for(int i = 0;i < 100;i++){
			if((i + 100 * a)%b == 0){
				flag++;
				int x = i;

				if(flag > 1){
					cout<<" ";
				}
				if(i<10){
					cout<<"0";
				}
				cout<<i;
			}
		}
		cout<<endl;
	}
	return 0;
}