#include<iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int m = 0;m < n; m++){
		char str[100];
		gets(str);
		int a = 0;
		int e = 0;
		int i = 0;
		int o = 0;
		int u = 0;
		for(int j=0;j<strlen(str);j++){
			switch(str[j]){
				case 'a':
				a++;
				break;
				case 'e':
				e++;
				break;
				case 'i':
				i++;
				break;
				case 'o':
				o++;
				break;
				case 'u':
				u++;
				break;
				default:
				continue;
			}
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(m!=n-1){
			cout<<endl;
		}

	}
	return 0;
}