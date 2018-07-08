#include<bits/stdc++.h>
using namespace std;

void printKmax(int a[],int n,int k){

	deque<int> qi(k);
	for(int i=0;i<k;i++){

		while((!qi.empty()) && a[i]>= a[qi.back()])
			qi.pop_back();

		qi.push_back(i);
	}


	for(int i=k;i<n;i++){
		cout<<a[qi.front()]<<" ";

		while((!qi.empty()) && qi.front() <=i-k)
			qi.pop_front();

		while ( (!qi.empty()) && a[i] >= a[qi.back()])
            qi.pop_back();

        qi.push_back(i);

	}
	cout << a[qi.front()]<< endl;;
}
int main(){
	// int a[] = {12, 1, 78, 90, 57, 89, 56};
	// int n = sizeof(a)/sizeof(a[0]);
	// printKmax(a,n,3);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		printKmax(a,n,k);
	}
	return 0;
}