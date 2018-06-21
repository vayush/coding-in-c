// C++ Visible Numbers
// https://practice.geeksforgeeks.org/problems/c-visible-numbers/0

#include <iostream>
// #include <bits/stdc++.h>
#include<vector>
using namespace std;
void visibleNumber(int a[],int n){
	int k = n/3;
	vector<pair<int,int> >v;
	sort(a,a+n);
	int count =	1;
	int i=0;
		while(i<n){
		if(a[i]==a[i+1]){
			count++;
			i++;
		}
		else if(a[i]!=a[i+1]){
			if(count>1){
			v.push_back(make_pair(a[i],count));
			}
			count=1;
			i++;	
		}
	}
	count=0;
	sort(v.begin(),v.end());
	for (int i = 0; i < v.size(); i++)
	{
		if(v[i].second>k){
			cout<<v[i].first<<" ";
			count++;
		}
	}
	if(count>0){
		cout<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
}
int main(){
	int a[] = {94,92,95,93,92,92,93,92,94,94,94,95,93,93,92,95,95,93,92,95};
	int n = sizeof(a)/sizeof(a[0]);
	visibleNumber(a,n);
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
	// 	visibleNumber(a,n);
	// }
	return 0;
}