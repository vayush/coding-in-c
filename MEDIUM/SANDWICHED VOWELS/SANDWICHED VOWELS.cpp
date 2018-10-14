#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return 1;
    }
    return 0;
}

void printa(string s){

    cout<<s[0];
    int p=1;
    for(int i=1;i<s.length()-1;i++){

        if(isvowel(s[i]) && !isvowel(s[i-1]) && !isvowel(s[i+1]) ) 
            p++;

        else{
            cout<<s[p];
            p++;
        }
    }
    cout<<s[s.length()-1]<<endl;
}


int main(){

    // string s = "aaii";
    // printa(s);



    int t;
    cin>>t;
    cin.ignore();
    while(t--){
         string s = "";
         getline(cin,s);
         printa(s);
    }


    return 0;
}