#include<bits/stdc++.h>
using namespace std;

bool dictionary(string word){
	string dictionary [] = {"mobile","samsung","sam","sung", 
                            "man","mango","icecream","and", 
                             "go","i","like","ice","cream"};

    set<string>set;

    for(int i=0;i<sizeof(dictionary)/sizeof(dictionary[0]);i++){
    		
    	string s = word;

    	if(dictionary[i] == s)
    		return true;
    }

    return false;
}


bool wordbreak(string str){

	// cout<<str<<" ";

	if(str == ""){

		return true;
	}
	
	for(int i=1;i<=str.length();i++){

		if(dictionary(str.substr(0,i)) && wordbreak(str.substr(i,str.length())))
			return true;
	}
	return 0;
}


int main(){
	wordbreak("ilikesamsung")? cout <<"Yes\n": cout << "No\n";

	// wordbreak("samsungandmangok")? cout <<"Yes\n": cout << "No\n";
	// dictionary();
	return 0;
}