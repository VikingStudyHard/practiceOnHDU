//汉诺塔
#include <iostream>
using namespace std;
long long f(int n){//符合n-1个圆盘
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 2;
	}
	return 3*f(n-1)+2;
}

int main(){

		
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		/*
		
		将n-1个移到二号柱子，上面放上最大盘，再把最大盘放到三号，最后把n-1个移到三号柱子
		相当于将n-1个从一号挪到三号，中间加入两次大盘的移动
		*/
		cout<<f(n-1)+2<<endl;
	}
	
	return 0;
}