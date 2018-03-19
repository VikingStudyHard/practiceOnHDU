//三角形
#include <iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	for(;m>0;m--){
		double a,b,c;
		cin>>a>>b>>c;
		if(a+b>c && a+c>b && b+c>a){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
//题目说输入的三条边是正数,所以在定义的时候一定要定义为double或float型,不能是整型.