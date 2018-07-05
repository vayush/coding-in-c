// https://practice.geeksforgeeks.org/problems/delete-array-elements-which-are-smaller-than-next-or-become-smaller/0
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void deleteArray(int a[],int n,int k){
	stack<int> s;
	int count =0;
	s.push(a[0]);
	for (int i = 1; i < n; i++)
	{
		while(!s.empty() && (s.top()<a[i]) && count<k){

			s.pop();
			count++;
		}


		s.push(a[i]);
	}

	int m = s.size();
	vector<int> v(m);


	while(!s.empty()){
		v[--m]=s.top();
		s.pop();
		
	}

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}

	cout<<endl;
}

int main(){

	int a[] = {20,10,25,30,40};
	deleteArray(a,5,2);

	// int t;
	// cin>>t;
	// while(t--){
	// 	int n;
	// 	cin>>n;
	// 	int a[n],k;
	// 	for (int i = 0; i < n; i++)
	// 	{
	// 		cin>>a[i];
	// 	}
	// 	cin>>k;
	// 	deleteArray(a,n,k);
	// }

}