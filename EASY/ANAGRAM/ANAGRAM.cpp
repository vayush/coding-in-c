#include<bits/stdc++.h>
using namespace std;


bool anagram(string &a,string &b){


	if(a.length()!=b.length()){
		return false;
	}

	int count[256] = {0};
	for (int i = 0; i<a.length(); i++)
	{
		count[a[i]]++ ;
		count[b[i]]-- ;
	}

  for (int i = 0; i < 256; i++)
        if (count[i]==1)
            return false;
     return true;
}

int main(){
	// string a = "aaca";
	// string b = "acaa";

	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		string b;
		getline(cin,a);
		getline(cin,b);
		if(anagram(a,b)){
		cout<<"YES"<<std::endl;
		}
		else{
		cout<<"NO"<<endl;
		}
	}	
	return 0;
}