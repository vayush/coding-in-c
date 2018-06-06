// https://practice.geeksforgeeks.org/problems/smallest-greater-elements-in-whole-array/0
#include<iostream>
using namespace std;
void smallestGreater(int a[],int n){
	for (int i = 0; i < n; ++i)
	{
		int diff=INT_MAX,position=-1;

		for(int j=0;j<n;j++){
			if(a[i]<a[j] && a[j]-a[i]<diff){
				diff = a[j]-a[i];
				position = j;
			}
		}

		if(position==-1)
			cout<<"_"<<" ";
		else
			cout<<a[position]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		smallestGreater(a,n);
	}
	return 0;
}