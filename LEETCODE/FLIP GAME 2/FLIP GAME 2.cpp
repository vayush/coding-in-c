#include<bits/stdc++.h>
using namespace std;


bool game(string &s){
    int n = s.length();

    if(s.length()<2 ){
        return false;
    }

    for(int i=0;i<n-1;i++){
        string ss = "";
        if(s[i] == s[i+1] && s[i]=='+'){
            s[i]='-';
            s[i+1] = '-';
            bool x =  game(s);
            s[i] = '+';
            s[i+1] = '+';


            if(!x){
                return false;
            }
        }
    }
    return true;
}

int main(){
    string s = "++++";
    cout<<game(s);

    return 0;
}