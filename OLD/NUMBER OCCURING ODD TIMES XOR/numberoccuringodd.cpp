#include<bits/stdc++.h>
using namespace std;

int oddOccuring(int a[],int n){
	int b = 0;
	for (int i = 0; i < n; i++)
	{
		b = b^a[i];
	}
	return b;
}

int main(){
	int a[] = {2,3,5,4,5,2,4,3,5,2,4,4,2};
	int n =sizeof(a)/sizeof(a[0]);
	cout<<oddOccuring(a,n);	

	return 0;
}