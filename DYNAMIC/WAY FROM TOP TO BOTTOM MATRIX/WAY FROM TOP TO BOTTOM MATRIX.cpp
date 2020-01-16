// https://www.geeksforgeeks.org/count-possible-paths-top-left-bottom-right-nxm-matrix/


#include<bits/stdc++.h>
using namespace std;

int ways(int m,int n){
    int dp[m][n];
    for(int i=0;i<m;i++){
        dp[i][0]=1;
    }
    for(int i=0;i<n;i++){
        dp[0][i]=1;
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }

    return dp[m-1][n-1];
}

int main(){
    cout<<ways(5,5);

    return 0;
}