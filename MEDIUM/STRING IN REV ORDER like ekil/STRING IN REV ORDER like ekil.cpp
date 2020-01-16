
#include <iostream>
using namespace std;
void reverseStr(string& s,int start,int end)
{
	while(start<end){
		swap(s[start],s[end]);
		start++;
		end--;
	}
}
void revWords(string s){
	int i=0;
	int j=0;
	while(i<s.length()){
		if(s[i]==' '){
			reverseStr(s,j,i-1);
			
			j=i+1;
			i++;
		}
		else{
			i++;
		}

		
	}
	if(i==s.length())
		reverseStr(s,j,i-1);
	for (int i = s.length()-1; i >=0 ; i--)
	{
		cout<<s[i];
	}
	cout<<endl;
}
int main(){
	string s = "pqr mno";
	string s2 = "AYUSH VERMA IS A GOOD BOY";
	// cout<<s.length();
	revWords(s);
	revWords(s2);
	// int t;
	// cin>>t;
	// cin.ignore();
	// while(t--){
	// 	string s;
	// 	getline(cin,s);
	// 	revWords(s);
	// }
	// return 0;
}