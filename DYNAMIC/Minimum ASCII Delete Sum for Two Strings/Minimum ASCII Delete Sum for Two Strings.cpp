// Minimum ASCII Delete Sum for Two Strings



#include<bits/stdc++.h>
using namespace std;

int minimumDeleteSum(string s1, string s2) {
        
        int m = s1.size();
        int n = s2.size();

        int dp[m+1][n+1];

        dp[0][0] = 0;

        for(int i = 0; i < m; i++){
            dp[i + 1][0] = dp[i][0] + int(s1[i]);
        }

        for(int i = 0; i < n; i++){
            dp[0][i + 1] = dp[0][i] + int(s2[i]);
        }

        for(int i = 0; i <m; i++){

            // cout<<i<<"      ";

            for(int j = 0; j < n; j++){
                // cout<<j<<" "<<endl;


 

                if(s1[i] == s2[j]){
                    dp[i + 1][j + 1] = dp[i][j];
                }
                else{
                    dp[i + 1][j + 1] = min(dp[i][j + 1] + int(s1[i]), dp[i + 1][j] + int(s2[j]));
                }
            }
        }

        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        

    return dp[m][n];
}


int main(){
    string s1 = "delete";
    string s2 = "leet";
    cout<<minimumDeleteSum(s1,s2);

    return 0;
}