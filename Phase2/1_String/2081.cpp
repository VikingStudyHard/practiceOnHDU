#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	while(n--){
		string str;
		getline(cin,str);
		cout<<"6"<<str.substr(6,10)<<endl;
	}
	return 0;
}