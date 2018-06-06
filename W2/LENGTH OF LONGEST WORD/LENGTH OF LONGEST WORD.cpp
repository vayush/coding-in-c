// https://practice.geeksforgeeks.org/problems/program-for-length-of-the-longest-word-in-a-sentence/0/?ref=self
#include <iostream>
using namespace std;
int longestLength(string s,int n){
	int llength=0,maxlength=0;
	for(int i=0;i<n;i++){
		if(s[i]!=' '){
			llength++;
		}
		if(llength>maxlength){
			maxlength = llength;
		}
		if(s[i]==' '){
			llength = 0;
		}
	}
	return maxlength;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int n=s.length();
		cout<<longestLength(s,n)<<endl;
	}
	return 0;
}
