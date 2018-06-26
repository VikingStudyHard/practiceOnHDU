//Identity Card
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n>0){
		string id;
		cin>>id;
		string region = id.substr(0,2);
		stringstream sstr;
		sstr << region;
		int regionNum;
		sstr >> regionNum;
		string regionResult;
		switch(regionNum){
			case 33:
				regionResult = "Zhejiang";
				break;
			case 11:
				regionResult = "Beijing";
				break;
			case 71:
				regionResult = "Taiwan";
				break;
			case 81:
				regionResult = "Hong Kong";
				break;
			case 82:
				regionResult = "Macao";
				break;
			case 54:
				regionResult = "Tibet";
				break;
			case 21:
				regionResult = "Liaoning";
				break;
			case 31:
				regionResult = "Shanghai";
				break;
		}
		string year = id.substr(6,4);
		string month = id.substr(10,2);
		string day = id.substr(12,2);
		cout<<"He/She is from "<<regionResult<<",and his/her birthday is on "<<month<<","<<day<<","<<year<<" based on the table."<<endl;
		sstr.clear();
		n--;
	}
}
