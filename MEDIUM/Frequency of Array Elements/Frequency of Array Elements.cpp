// Frequency of Array Elements
// https://practice.geeksforgeeks.org/problems/frequency-of-array-elements/0
#include<bits/stdc++.h>
using namespace std;

void freqElements(int a[],int n){
	map<int,int> m;
	for (int i = 0; i < n; ++i)
	{

		m[a[i]]++;
	}
	for (int i = 1; i <= n; ++i)
	{
		if(m.find(i)==m.end()){
			m[i];
		}
	}

	map<int,int>::iterator it = m.begin();
	while(it!=m.end()){
		cout<<it->second<<" ";
		it++;
	}
	cout<<endl;
}
int main(){
	// int a[] ={2,3,2,3,5};
	// int n = sizeof(a)/sizeof(a[0]);
	// freqElements(a,n);
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
		freqElements(a,n);
	}
	return 0;
}