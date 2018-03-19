//第几天？
#include <iostream>
#include <string>
using namespace std;
int main(){
	string date,year,month,day;
	while(cin>>date){
		string a[] =date.split("/");
		year=a[0];
		month=a[1];
		day=a[2];
		cout<<year<<" "<<month<<" "<<day<<" "<<endl;
	}
}