#include <iostream>
<<<<<<< HEAD
#include <cstdio>
using namespace std;

int main(){
	int x,y,max,m,n;
	int a[1000][1000];

	while(~scanf("%d%d",&x,&y)){
		if(x==0 && y==0){
			break;
		}
		for(int i = 0;i < x;i++){
			for(int j = 0;j < y;j++){
				scanf("%d",&a[i][j]);
			}
		}
		max=a[0][0];
		m=0;n=0;
		for(int i = 0;i < x;i++){
			for(int j = 0;j < y;j++){
				if(abs(a[i][j])>abs(max)){
					max=a[i][j];
					m=i;n=j;
				}
			}
		}
		printf("%d %d %d\n",m+1,n+1,max);
	}
	return 0;
=======
using namespace std;

int main(){
	int x,y;
	int a[][];
>>>>>>> 9933c333a78fe1cfb5f0374252ade463d07e2cef
}