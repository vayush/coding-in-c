#include<bits/stdc++.h>
using namespace std;

bool identical(int a[],int b[],int n){
	map<int,int> m;
	for (int i = 0; i <n; i++)
	{

			m[a[i]]++;
	}
	cout<<"AYUSH VERMA";
	map<int,int>::iterator it;


	for (int i = 0; i < n; i++)
	{
		if(m.find(b[i])==m.end()){
			return false;
		}

		if(m[b[i]] == 0)
			return false;

		m[b[i]]--;
	}

	
	for (it = m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<" "<<endl;
	}


	return true;
	
}

int main(){
	int a[] = {2,1,3,4};
	int b[] = {2,3,4,9};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<identical(a,b,n);
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n;
	// 	cin>>n;
	// 	int a[n],b[n];
	// 	for (int i = 0; i < n; i++)
	// 	{
	// 		cin>>a[i];
	// 	}
	// 	for (int i = 0; i < n; i++)
	// 	{
	// 		cin>>b[i];
	// 	}

	// 	cout<<identical(a,b,n)<<endl;
	// }

	return 0;
}