#include<iostream>

using namespace std;

int main(){
	long array[31];
	array[0]=3;
	for(int i = 1;i<31;i++){
		array[i]=(array[i-1]-1)*2;
	}
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		printf("%ld\n",array[a]);

	}
	return 0;
}