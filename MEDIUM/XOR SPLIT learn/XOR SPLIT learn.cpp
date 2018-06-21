#include<bits/stdc++.h>
using namespace std;

int xors(int a[],int n){
	int xs = 0;
	for (int i = 0; i < n; i++)
	{
		xs = xs ^ a[i];
	}
	if(xs == 0){
		return (1<<(n-1))-1;
	}

	return 0;
}
int main(){
	int a[] = {37,76,86,59,4,66,48,30,42,94,95,38,55,100,95,25,77,19,46,10,19,26,93,24,22,42,40,52,4,97,10,92,24,95,50,79,12,98,60,54,91,54,43,97,6,90,73,34,8,19,95,78,44,87,54,17,80,93,68};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<xors(a,n);
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
	// 	cout<<xors(a,n)<<endl;
	// }

	return 0;
}