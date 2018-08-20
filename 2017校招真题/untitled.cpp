#include<iostream>
#include<cstring>
using namespace std;



void f(string a[]){
	int s = sizeof(a)/sizeof(a[0]);
	cout<<sizeof(a)<<" "<<sizeof(a[0])<<endl;
	cout<<s<<endl;
}

int main()
{

	string a[4] = {"a1","bb","ccc"};
	
	cout<<sizeof(a)<<" "<<sizeof(a[0])<<endl;
	int s = sizeof(a)/sizeof(a[0]);
	cout<<s<<endl;

	cout<<endl;

	f(a);







	// int a[5] = {1,2,3,4};
	// //cout<<strlen(a)<<endl;
	// cout<<sizeof(a)<<endl;
	// //cout<<a.length()<<endl;
	// //cout<<a.size()<<endl;
	// cout<<sizeof(a[0])<<endl;
	// return 0;

	// char a[5] = {'1','z','3','w'};
	// cout<<strlen(a)<<endl;
	// cout<<sizeof(a)<<endl;
	// // cout<<a.length()<<endl;
	// // cout<<a.size()<<endl;
	// cout<<sizeof(a[0])<<endl;
	// return 0;

	// string a[5] = {"123","awawawa","lalalala","eee"};
	// //cout<<strlen(a)<<endl;
	// cout<<sizeof(a)<<endl;
	// // cout<<a.length()<<endl;
	// // cout<<a.size()<<endl;
	// cout<<sizeof(a[0])<<endl;
	// cout<<sizeof(a[1])<<endl;
	// cout<<sizeof(a[2])<<endl;
	// cout<<a[0].length()<<endl;
	// cout<<a[1].length()<<endl;
	// cout<<a[2].length()<<endl;
	return 0;

}