#include <iostream>
using namespace std;
int main(){
	int n;
	int time[6];
	cin>>n;
	while(n--){
		for(int i = 0;i<6;i++){
			cin>>time[i];
		}
		int s = time[2]+time[5];
		int m = time[1]+time[4];
		int h = time[0]+time[3];

		if(s>=60){
			s = s - 60;
			m = m + 1;
		}
		if(m>=60){
			m = m - 60;
			h = h + 1;
		}
		cout<<h<<" "<<m<<" "<<s<<endl;
	}
	return 0;
}