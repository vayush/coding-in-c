#include<bits/stdc++.h>
using namespace std;

void oddEven(int a[],int n){
	sort(a,a+n);
	int ans[n];
	int p=0,q=n-1;
	for (int i = 0; i < n; i++)
	{
		if((i+1)%2==0){
			ans[i] = a[q];
			q--;
			
		}
		else{
			ans[i] = a[p];
			p++;
			
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
int main(){
	// int a[] = {1,3,2,2,5};
	// int n = sizeof(a)/sizeof(a[0]);
	// oddEven(a,n);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		oddEven(a,n);
	}

	return 0;
}