#include<bits/stdc++.h>
using namespace std;

bool match(map<string,int>m1,map<string,int>m2){
	
	if(m1.size()!=m2.size())
		return 0;

	auto x=m2.begin();

	for(auto it=m1.begin();it!=m1.end();it++){
		if(it->first != x->first || it->second !=x->second){
			return 0;
		}
		x++;
	}
	return 1;

}


bool anagramMatch(string &s,string &m){
	int n1 = s.length();
	int n2 = m.length();
	map<string,int>pat,str;

	for(int i=0;i<n2;i++){
		string ss = "";
		ss = m[i];
		pat[ss]++;
	}

	for(int i=0;i<n2;i++){
		string ss = "";
		ss = s[i];
		str[ss]++;
	}
	int start=0,end=n2-1;

	while(end<n1){

		if(match(str,pat))
			return 1;
		// cout<<endl;

		// for(auto it = str.begin();it!=str.end();it++)
		// 	cout<<it->first<<" "<<it->second<<endl;

		string ss = "";
		ss = s[start];

		auto it = str.find(ss);
		if(it->second >1){
			str[ss]--;
			
		}
		else{
			str.erase(ss);
		}
		

		start++;
		end++;
		
		ss = s[end];
		str[ss]++;
			
	}
	return 0;
}

int main(){
	string s = "ideserve";
	string m = "veer";
	cout<<anagramMatch(s,m);

	return 0;
}