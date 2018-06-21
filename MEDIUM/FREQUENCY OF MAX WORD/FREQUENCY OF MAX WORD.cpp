// https://practice.geeksforgeeks.org/problems/word-with-maximum-frequency/0
// Word with maximum frequency
#include<bits/stdc++.h>
using namespace std;
void maxFreq(string s){
	unordered_map <string,int> m;
	stringstream ss (s);
	string word;
	while(ss >>word){
		m[word]++;
	}
	int max =INT_MIN;
	for(auto it = m.begin();it!=m.end();it++){
		if(it->second>max){
			max = it->second;
		}
	}
	stringstream sss (s);
	while(sss>>word){
		if(m[word] == max){
			cout<<word<<" "<<max<<endl;
			break;
		}
	}
}
int main(){
	string s = "this is not right";
	maxFreq(s);
	// int t;
	// cin>>t;
	// cin.ignore();
	// while(t--){
	// 	string s;
	// 	getline(cin,s);
	// 	maxFreq(s);
	// }


	return 0;
}