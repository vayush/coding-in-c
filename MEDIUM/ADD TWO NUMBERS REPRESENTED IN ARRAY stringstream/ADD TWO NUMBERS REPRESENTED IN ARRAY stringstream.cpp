// Add two numbers represented by two arrays
// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays/0

#include<bits/stdc++.h>
#include <string>
using namespace std;

int sumDigit(int a[],int b[],int m,int n){

	string s = "";
	string t = "";
	
	for (int i = 0; i < m; i++)
	{
		s = s + to_string(a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		t = t + to_string(b[i]);
	}
	
	stringstream ss,ss1;
	ss << s;
	int in1,in2;
	ss >>in1;
	ss1 << t;
	ss1 >> in2;

	return (in1+in2);

}

int main(){

	// int a[] = {1,2,3};
	// int b[] = {2,1};
	// cout<<sumDigit(a,b,3,2);

	int t;
	cin>>t;
	while(t--){
		int m;
		cin>>m;
		int a[m];
		for (int i = 0; i < m; i++)
		{
			cin>>a[i];
		}
		int n;
		cin>>n;
		int b[n];
		for (int i = 0; i < n; i++)
		{
			cin>>b[i];
		}

		cout<<sumDigit(a,b,m,n)<<endl;
	}
	return 0;
}