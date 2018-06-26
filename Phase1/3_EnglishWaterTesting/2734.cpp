//Quicksum
#include <iostream>
#include <string>
using namespace std;
int main(){
	string line;
	while(getline(cin,line)){
		if(line=="#"){
			return 0;
		}else{
			int length = line.length();
			int sum = 0;
			for(int i = 0;i < length; i++){
				if(line[i]>='A'&&line[i]<='Z'){
					sum += (line[i]-'A'+1)*(i+1);
				}
				
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}