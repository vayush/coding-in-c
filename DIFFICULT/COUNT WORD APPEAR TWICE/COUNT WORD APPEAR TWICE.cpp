#include<bits/stdc++.h>
using namespace std;

int words(string s){
	stringstream ss (s);
	string word;
	map<string,int>m;
	while(ss>>word){
		// cout<<word<<" ";
		m[word]++;
	}
	int count=0;

	for(auto it = m.begin();it!=m.end();it++){
		if(it->second == 2)
			count++;
	}
	return count;

}
int main(){
	string s = "hate love peace love peace hate love peace love peace";
	int n = sizeof(s)/sizeof(s[0]);
    cout<<words(s)<<endl;
    // int t;
    // cin>>t;    
    // cin.ignore();	
    // while(t--){
    // 	int n;
    // 	cin>>n;
    // 	cin.ignore();
    // 	string s ;
    // 	getline(cin,s);
    // 	cout<<words(s)<<endl;
    	
    // }
	return 0;
}