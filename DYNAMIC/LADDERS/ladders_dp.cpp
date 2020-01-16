#include<bits/stdc++.h>
using namespace std;

int ladders(int t,int s){

    int dp[t+1];

    for (int i = 0; i <=t; i++)
    {
        dp[i]=0;
    }


    dp[0]=1;
    dp[1]=1;




    for(int i=2;i<=t;i++){

        int x=i-s;
        if(x<0)
            x=0;
        
        for(int j=x;j<(s+i-s);j++){
            dp[i]+=dp[j];
        }
    }

    return dp[t];
}


int main(){
   cout<<ladders(4,2);

    return 0;
}