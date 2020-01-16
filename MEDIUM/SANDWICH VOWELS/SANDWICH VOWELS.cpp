// Sandwiched_Vowels
// https://practice.geeksforgeeks.org/problems/sandwiched-vowels/0
#include <iostream>
using namespace std;

void sandwichVowels(string a){
	
	string res = "";
	res = a[0];
	int n= a.size();
	for(int i=1;i<n-1;i++){
	        if(a[i-1]!='a' && a[i-1]!='e' && a[i-1]!='i' && a[i-1]!='o' && a[i-1]!='u' ){

	            if(a[i+1]!='a' && a[i+1]!='e' && a[i+1]!='i' && a[i+1]!='o' && a[i+1]!='u'){

	                if(a[i]=='a'  || a[i]=='e'  || a[i]=='i'  || a[i]=='o'  || a[i]=='u'){
	                	
	                    
	                } 
	                else{
	                    res=res+a[i];
	                }
	            }
	            else{
	                res=res+a[i];
	            }
	        }
	        else{
	            res=res+a[i];
	        }
	    }
	    res=res+a[n-1];
	    cout << res << endl;
	}
int main(){
	string s = "ceghij";
	sandwichVowels(s);
	// int t;
	// cin>>t;
	// while(t--){
	// 	string s;
	// 	cin>>s;
	// 	sandwichVowels(s);
	// }
	return 0;
}
