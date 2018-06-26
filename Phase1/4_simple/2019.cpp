//数列有序!
#include<iostream>
using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m){
		if(n == 0 && m == 0){
			return 0;
		}else if(n<0 || n>100){
            continue;
        }else if(n==0 && m!=0){
        	cout<<m<<endl;
        }else{
			int array[110];
			int x;
			int index = 0;
			while(cin>>x){
				array[index]=x;
				index++;
				if(index==n){
					break;
				}
			}
			if(m<=array[0]){
				for(int j=n;j>0;j--){
					array[j]=array[j-1];
				}
				array[0]=m;
			}else if(m>=array[n-1]){
				array[n]=m;
			}else{
				for(int i = 0;i<n;i++){
					if(array[i]>=m && array[i-1]<m){
						for(int j=n;j>i;j--){
							array[j]=array[j-1];
						}
						array[i]=m;
						break;
					}
				}				
			}
			for(int i = 0;i<n;i++){
					cout<<array[i]<<" ";
			}
			cout<<array[n]<<endl;
		}
	}
	return 0;
}