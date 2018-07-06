#include<bits/stdc++.h>
using namespace std;
void subarray(int a[],int n,int k){
	int sum =0,start=0;
	for (int i = 0; i < n; i++)
	{
		sum = sum+a[i];

		if(sum>k){
			while(sum>k && start<i-1){
				sum = sum - a[start];
				start++;
			}
		}

		if(sum==k){
			cout<<start+1<<" "<<i+1<<std::endl;
			return;
		}
	}
	cout<<"-1"<<endl;
}
int main(){
	int a[] = {1, 4};
	int n = sizeof(a)/sizeof(a[0]);
	subarray(a,n,10);
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n,k;
	// 	cin>>n>>k;
	// 	int a[n];
	// 	for (int i = 0; i < n; i++)
	// 	{
	// 		cin>>a[i];
	// 	}
	// 	subarray(a,n,k);
	// }

	return 0;
}