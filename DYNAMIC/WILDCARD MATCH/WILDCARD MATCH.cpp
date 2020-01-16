#include<bits/stdc++.h>
using namespace std;

int strMatch(string &p,string &s,int n,int m){

    bool dp[m+1][n+1];

    memset(dp,0,sizeof(dp));

    
    




    dp[0][0]=1;


    for (int j = 1; j <= n; j++) 
        if (p[j - 1] == '*') 
            dp[0][j] = dp[0][j - 1];


    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){

            if(p[j-1] == '?' || s[i - 1] == p[j - 1])
                dp[i][j] = dp[i-1][j-1];

            else if(p[j-1] == '*')
                dp[i][j] = (dp[i][j-1] || dp[i-1][j]);
            else
                dp[i][j] = 0;
        }
    }



    // for(int i=0;i<=m;i++){
    //     for(int j=0;j<=n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    return dp[m][n];
    
}

int main(){
    string p = "*ba*a?";
    string s = "baaabab";

    cout<<strMatch(p,s,p.length(),s.length());

    return 0;
}