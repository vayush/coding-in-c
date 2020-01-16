#include<bits/stdc++.h>
using namespace std;

int ways2(int n,int k){

	if(n==0)
		return 1;

	if(n<0)
		return 0;

	int ans=0;
	for(int j=1;j<=k;j++){
		ans+= ways2(n-j,k);
	}
	return ans;
}

int main(){
	// int n=6;  
	cout<<ways2(6,3);

	return 0;
}