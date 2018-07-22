#include<iostream>
using namespace std;
void f(char c,int n){
	int tmp1 =n-1;
	while(tmp1--){
		cout<<" ";
	}
	cout<<c<<endl;

	for(int i = 2 ;i < n;i++){
		int tmp2 = n-i;
		while(tmp2--){
			cout<<" ";
		}
		cout<<c;
		int tmp3 =2*i-3;
		while(tmp3--){
			cout<<" ";
		}
		cout<<c<<endl;
	}

	int tmp4 =2*n-1;
	if(tmp4>1){
		while(tmp4--){
			cout<<c;
		}
		cout<<endl;
	}
	
}

int main(){
	char letter;
	int num;
	int flag = 0;
	while(cin>>letter && letter != '@' && cin>>num){
		if(flag == 0){
			f(letter,num);
			flag++;
		}else{
			cout<<endl;
			f(letter,num);
		}
		getchar();
	}
	return 0;
}