//ASCII码排序
#include <iostream>
using namespace std;
int main(){
	char a,b,c,s,m,l;
	while(cin>>a>>b>>c){
		if(a>b){
			l=a;
			s=b;
		}else{
			l=b;
			s=a;
		}
		if(l>c){
			if(s>c){
				m=s;
				s=c;
			}else{
				m=c;
			}
		}else{
			m=l;
			l=c;
		}
		cout<<s<<" "<<m<<" "<<l<<endl;
	}
}