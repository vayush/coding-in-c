// https://practice.geeksforgeeks.org/problems/rope-cutting/0

#include <iostream>
using namespace std;
void ropeCutting(int a[],int n){
	sort(a,a+n);
	int count = 0;
	int length = a[0];
	for (int i = 1; i < n; i++)
	{
		if(a[i]-length >0){
			cout<<n-i<<" ";
			count++;
		}

		length = a[i];
	}
	cout<<endl;
	if(count==0){
		cout<<"0"<<endl;
	}

}
int main(){
	// int a[] = {122,95,122,122,94,95,94,122,122,93,95,95,122,95,93,122,95,94,122,94,5,36};
	// int n = sizeof(a)/sizeof(a[0]);
	// ropeCutting(a,n);

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
		ropeCutting(a,n);
	}
}