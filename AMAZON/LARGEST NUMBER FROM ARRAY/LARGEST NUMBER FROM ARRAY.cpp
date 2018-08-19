#include<bits/stdc++.h>
using namespace std;

bool myCompare(int a,int b){

	string x = to_string(a);
	string y = to_string(b);


	if(x+y > y+x){
		return 1;
	}
	else{
		return 0;
	}
}

void largestNumber(int a[],int n){

	sort(a,a+n,myCompare);
	for (int i = 0; i < n; i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}

int main(){
	int a[] = {54,546,548,60,40};
	int n = sizeof(a)/sizeof(a[0]);
	largestNumber(a,n);
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
	// 	largestNumber(a,n);
	// }
	return 0;
}