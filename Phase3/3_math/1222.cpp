#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int p;
	scanf("%d",&p);
	while(p--){
		int m,n,k;
		scanf("%d %d",&m,&n);
		 while(n!=0)
        {
            k=m%n;
            m=n;
            n=k;
        }

		if(m!=1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;	
}
//输入的两个数是否互质即最大公约数是否为1.
