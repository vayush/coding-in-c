// https://practice.geeksforgeeks.org/problems/sorting-all-array-elements-except-one/0

#include<iostream>
using namespace std;

void sortExcept(int a[],int n,int k){
	int l = a[k];
	swap(a[k],a[n-1]);
	sort(a,a+n-1);
	
	for(int i=n-1;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=l;
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
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
		int k;
		cin>>k;
		sortExcept(a,n,k);
	}
	return 0;
}
