#include<bits/stdc++.h>
using namespace std;

int minPath(int a[][4],int m,int n){

	int dp[m][n];
	// dp[0][0]=a[0][0];
	// for(int i=1;i<n;i++){
	// 	dp[0][i]=a[0][i]+dp[0][i-1];
	// }	

	// for(int i=1;i<m;i++){
	// 	dp[i][0]=a[i][0]+dp[i-1][0];
	// }

	for(int i=0;i<m;i++){
		// cout<<i;
		for(int j=0;j<n;j++){


			// cout<<i<<j<<" ";

			if(i==0 && j==0)
				dp[i][j] = a[i][j];

			else if(j==0)
				dp[i][j]= a[i][j]+dp[i-1][j];

			else if(i==0)
				dp[i][j]= a[i][j]+dp[i][j-1];

			else
			dp[i][j] = a[i][j]+min(dp[i-1][j],dp[i][j-1]);
		}
		// cout<<endl;
	}
	return dp[m-1][n-1];
}

int main(){
	int a[][4]={{1,3,5,8},
			   {4,2,1,7},
			   {4,3,2,3}};
	cout<<minPath(a,3,4);
	return 0;
}