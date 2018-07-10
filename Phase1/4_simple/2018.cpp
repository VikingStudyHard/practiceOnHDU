//母牛的故事
#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0){
			return 0;
		}else{
			if(n<=4){
				cout<<n<<endl;
			}else{
				int a1,a2,a3,a4;//一岁、两岁、三岁、四岁及以上
				n=n-4;
				a1=1;a2=1;a3=1;a4=1;
				for(int i= 0;i<n;i++){
					a4+=a3;//当年大母牛数目d为前一年c和d的总和
                	a3=a2;//2母牛长了一岁到了3
                	a2=a1;//同上
                	a1=a4;//长成的母牛和原本的母牛共生出新的小母牛a个
				}
				cout<<a1+a2+a3+a4<<endl;
			}

		}
	}
}