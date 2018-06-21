#include <bits/stdc++.h>
using namespace std;

void countwords(string s){
	map<string,int> m;
	stringstream ss(s);
	string word;
	int count =0;
	while(ss>>word){
		m[word]++;
		count++;
	}
	map<string,int>::iterator it=m.begin();
	while(it!=m.end()){
		cout<<it->first<<" "<<it->second<<endl;
		it++;
	}

}
int main(){
	string s = "GEEKS FOR GEEKS IS FOR THE";
	countwords(s);
	return 0;
}