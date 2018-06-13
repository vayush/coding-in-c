// https://practice.geeksforgeeks.org/problems/merge-two-strings/0
// Merge two strings

#include <iostream>
#include<string>
using namespace std;

int main() {
	//code
	int t,l;
	string s1,s2;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    cin>>s1>>s2;
	    l=s1.length();
	    if(s2.length()<l)
	        l=s2.length();
	    for(int i=0;i<l;i++)
	    {
	       cout<<s1[i]<<s2[i];
	    }
	    if(l==s1.length())
	        for(int i=l;i<s2.length();i++)
	            cout<<s2[i];
	    else
	        for(int i=l;i<s1.length();i++)
	            cout<<s1[i];
	    cout<<"\n";
	}
	return 0;
}