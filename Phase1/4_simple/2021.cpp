//发工资咯：）
#include<iostream>
using namespace std;
int main(){
	int n;

	while(cin>>n){
		int min = 0;
		if(n==0){
			return 0;
		}else{

			int x;
			int array[100];

			for(int i=0;i<n;i++){
				cin>>x;
				array[i]=x;
			}
			
			for(int i=0;i<n;i++){
				int m100;
				int m50;
				int m10;
				int m5;
				int m2;
				int m1;
				int temp;

				m100 = array[i]/100;
				temp = array[i]%100;
				m50 = temp/50;
				temp = temp%50;
				m10 = temp/10;
				temp = temp%10;
				m5 = temp/5;
				temp = temp%5;
				m2 = temp/2;
				temp = temp%2;
				m1 = temp;

				min = min+m100+m50+m10+m5+m2+m1;
			}
			cout<<min<<endl;

		}
	}
}