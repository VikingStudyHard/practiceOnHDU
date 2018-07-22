#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	map<string,int> mymap;
	int n;
	string str;
	while(cin>>n && n!= 0){
		mymap.clear();
		while(n--){
			cin >> str;
			mymap[str]++;
		}
		int max = 0;
		string maxcolor;
		map<string,int>::iterator it;
		it = mymap.begin();
		for(;it != mymap.end();it++){
			if(it -> second > max){
				max = it -> second;
				maxcolor = it -> first;
			}
		}
		cout<< maxcolor <<endl;

	}
	return 0;

}