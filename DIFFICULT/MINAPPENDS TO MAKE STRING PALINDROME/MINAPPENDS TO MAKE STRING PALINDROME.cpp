#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s,int start){

    int end = s.length()-1;

    while(start<=end){
        if(s[start] != s[end]){
            
            return 0;
        }
        else{
            start++;
            end--;
        }
    }

    return 1;
}

int minAppend(string &str,int start){
    if(isPalindrome(str,start))
        return 0;
    start++;

    return 1+minAppend(str,start);
}

int main(){
    string str = "geeks";
    cout<<minAppend(str,0);
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
    //     string s;
    //     getline(cin,s);
    //     cout<<minAppend(s,0);
    // }

    return 0;
}