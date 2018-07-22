#include<iostream>
using namespace std;

bool isRight(int x,int y){
	int sum = 0;
	for(int i = 1; i < x;i++){
		if(x%i==0){
			sum += i;
		}
	}
	int sum1 =0;
	for(int i = 1; i < y;i++){
		if(y%i==0){
			sum1 += i;
		}
	}

	if(sum == y && sum1 ==x){
		return true;
	}else{
		return false;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		if(isRight(a,b)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
