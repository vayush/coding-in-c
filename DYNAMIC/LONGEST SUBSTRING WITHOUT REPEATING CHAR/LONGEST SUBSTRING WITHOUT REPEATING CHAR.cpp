#include<bits/stdc++.h>
using namespace std;


int longestUnique(string &s){
    set<string> set;


    int left=0,right=0,maxx=0;

    while(left<s.length() && right < s.length()){

        string ss = "";
        ss = s[right];

        if(set.find(ss)==set.end()){
            set.insert(ss);

            right++;
            maxx = max(maxx,right-left);

            
        }
        else{
            ss = s[left];
            set.erase(ss);
            left++;
        }
    }

    

    return maxx;

}

int main(){
    string s = "GEEKSFORGEEKS";
    cout<<longestUnique(s);

    return 0;
}