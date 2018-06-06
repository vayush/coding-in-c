#include<iostream>
using namespace std;
bool palindrome(string str){
	for (int i = 0; i < str.length(); i++){
		str[i]=tolower(str[i]);
	}
	int l=0;
	int r=str.length()-1;
	while(l<=r){
		if(!(str[l]>='a' && str[l]<='z') && !(str[l]>='0' && str[l]<='9')){
			l++;
		}
		else if(!(str[r]>='a' && str[r]<='z') && !(str[r]>='0' && str[r]<='9')){
			r--;
		}
		else if(str[l]==str[r]){
			l++;
			r--;
		}
		else 
			return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t!=0){
		string str;
		getline(cin,str);
		cout<<palindrome(str)<<"\n";
		t--;
	}
}