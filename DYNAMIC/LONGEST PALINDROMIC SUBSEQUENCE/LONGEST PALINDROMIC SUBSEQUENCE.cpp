#include<bits/stdc++.h>
using namespace std;

int lps(string& s){
    int n = s.length();

    int dp[n][n];

    memset(dp,0,sizeof(dp));

    // for (int i = 0; i < n; i++)
    // {
    //     dp[i][i] = 1;
    // }



    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            int k = i+j-1;

            if(j==k){
                dp[j][k] = 1;
            }
            else if(s[j] == s[k]){
                dp[j][k] = 2 + dp[j+1][k-1];
            }
            else{
                dp[j][k] = max(dp[j+1][k],dp[j][k-1]);
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    


    return dp[0][n-1];
}


int main(){
    string s = "agbdba";
    cout<<lps(s);

    return 0;
}