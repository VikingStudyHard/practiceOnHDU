//成绩转换
#include<iostream>
using namespace std;
int main(){
	int t;
	while(cin>>t){
		if(t>=0&&t<=100){
			switch(t/10){
				case 10:
				case 9:
					cout <<"A"<<endl;
					break;
				case 8:
					cout <<"B"<<endl;
					break;
				case 7:
					cout <<"C"<<endl;
					break;
				case 6:
					cout <<"D"<<endl;
					break;
				case 5:
				case 4:
				case 3:
				case 2:
				case 1:
				case 0:
					cout <<"E"<<endl;//-1到-9除以10商也为0
					break;
				default:
					cout <<"Score is error!"<<endl;

			}
		}else{
			cout <<"Score is error!"<<endl;
		}
	}
	return 0;
}
