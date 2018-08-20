#include <iostream>
using namespace std;

int main(){
	int a,b,n;
	int s[50];
	while(~scanf("%d %d %d",&a,&b,&n) && (a || b || n)){
		if(n==1||n==2)
        {
            cout<<"1"<<endl;
            continue;
        }
		
		s[1]=1;
		s[2]=1;
		for(int i = 3;i<=n%49;i++){
			s[i] = (a * s[i - 1] + b * s[i - 2]) % 7;
		}
		
		cout << s[n%49]<<endl;
	}
	return 0;
}