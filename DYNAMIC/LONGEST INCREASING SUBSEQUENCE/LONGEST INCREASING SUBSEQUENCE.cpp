#include<bits/stdc++.h>
using namespace std;

int lis(int a[],int n){

	if(n==0)
		return 0;

	if(n==1)
		return 1;

	int dp[n];

	for (int i = 0; i <n; i++)
	{
		dp[i]=1;
	}
	int i=1,mx=INT_MIN;
	while(i<n){
		for(int j=0;j<i;j++){
			if(a[j]<a[i])
				dp[i]=max(dp[i],1+dp[j]);

			if(dp[i]>mx)
				mx = dp[i];
		}
		i++;
	}

	return mx;
}


int main(){
	int a[] = {3,4,-1,0,6,2,3};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<lis(a,n);

	return 0;
}