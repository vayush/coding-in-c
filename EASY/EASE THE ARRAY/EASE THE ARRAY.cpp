// Ease the Array

// https://practice.geeksforgeeks.org/problems/ease-the-array/0

#include <iostream>
#include<vector>
using namespace std;
void easeArray(int a[],int n){
	int count=0;
	for (int i = 0; i < n-1; i++)
	{
		if(a[i+1]!=0 && a[i]==a[i+1]){
			a[i+1]=0;
			a[i]=2*a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if(a[i]!=0){
			cout<<a[i]<<" "; 
			count++;
		}
	}
	for (int i = count; i < n; ++i)
	{
		cout<<"0"<<" ";
	}
	cout<<endl;

}

int main(){
	int a[] = {0,1,2,2,0};
	int n = sizeof(a)/sizeof(a[0]);
	easeArray(a,n);
	return 0;
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n;
	// 	cin>>n;
	// 	int a[n];
	// 	for (int i = 0; i < n; i++)
	// 	{
	// 		cin>>a[i];
	// 	}
	// 	easeArray(a,n);
	// }
	return 0;
}