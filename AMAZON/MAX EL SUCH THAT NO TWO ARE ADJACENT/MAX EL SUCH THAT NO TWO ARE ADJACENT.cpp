// https://www.youtube.com/watch?v=UtGtF6nc35g&t=0s&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr&index=35
#include<bits/stdc++.h>
using namespace std;
int maxSum(int a[],int n){
	int incl=a[0];
	int excl =0;
	for(int i=1;i<n;i++){
		int temp = incl;
		incl = max(excl+a[i],incl);
		excl = temp;
	}
	return incl;
}
int main(){
	// int a[] = {5,5,10,100,10,5};
	// int n = sizeof(a)/sizeof(a[0]);
	// cout<<maxSum(a,n)<<endl;

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
		cin>>a[i];
		}
		cout<<maxSum(a,n)<<endl;
	}

	return 0;
}