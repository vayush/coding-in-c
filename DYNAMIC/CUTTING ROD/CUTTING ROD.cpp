#include<bits/stdc++.h>
using namespace std;

int cuttingrod(int a[],int n,int l){

  int dp[n+1][l+1];
 
  for(int i=0;i<=n;i++){
    for(int j=0;j<=l;j++){

      if(i==0 || j==0)
        dp[i][j]=0;


      else if(j<i)
        dp[i][j]= dp[i-1][j];
      else
      dp[i][j] = max(dp[i-1][j],a[i-1]+dp[i][j-i]);
    }
    // cout<<endl;
  }
  

  for(int i=0;i<=n;i++){
    for(int j=0;j<=l;j++){
      cout<<dp[i][j]<<" ";
    }
    cout<<endl;
  }
  

  return dp[n][l];

}

int main(){
  int a[] = {2,5,7,8};
  int n = sizeof(a)/sizeof(a[0]);
  cout<<cuttingrod(a,n,5);

  return 0;
}