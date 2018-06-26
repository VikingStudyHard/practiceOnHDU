//Balloon Comes!
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x;
	cin>>x;
	for(;x>0;x--){
		int a,b;
		char c;
		double result;
		cin>>c>>a>>b;
		switch(c){
			case '+':
				result = a+b;
				cout<<fixed<<setprecision(0)<<result<<endl;
				break;
			case '-':
				result = a-b;
				cout<<fixed<<setprecision(0)<<result<<endl;
				break;
			case '*':
				result = a*b;
				cout<<fixed<<setprecision(0)<<result<<endl;
				break;
			case '/':
				if(b!=0){
					if(a%b==0){
						result=a/b;
						cout<<fixed<<setprecision(0)<<result<<endl;
					}else{
						result = a*1.00 / b;
						cout<<fixed<<setprecision(2)<<result<<endl;
					}
				}
				break;
			default:
				continue;
		}	
	}
	return 0;
}
