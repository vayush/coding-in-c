#include<bits/stdc++.h>
using namespace std;

void ans(string &s,vector<string> v){
	map<string,int>m;

	for(int i=0;i<s.length();i++){
		string ss = "";
		ss = s[i];
		m[ss]++;
	}
	int count=0;
	for(int i=0;i<v.size();i++){

		for(int j=0;j<v[i].size();j++){

			string ss = "";
			ss = v[i][j];

			auto it = m.find(ss);

			if(m[ss]>=1 && count<s.length()){
				count++;
				m[ss]--;
			}
			if(count == s.length()){
				cout<<v[i]<<" ";
				break;
			}
		}
		count=0;
		m.clear();

		for(int i=0;i<s.length();i++){
			string ss = "";
			ss = s[i];
			m[ss]++;
		}
	}
}

int main(){
	string s = "sun";
    vector<string> v = {"geeksforgeeks", "unsorted", "sunday","sss","just"};

   	ans(s,v);

	return 0;
}