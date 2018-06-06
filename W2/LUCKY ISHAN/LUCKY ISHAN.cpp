// https://practice.geeksforgeeks.org/problems/lucky-ishaan/0

#include <iostream>
using namespace std;
long long int lucky(long long int a[],int n){
	long int no;
	long int aux[n];
	for (int i = 0; i < n; ++i)
	{	
		int sum=0;
		no=a[i];
		while(no!=0){
			sum = sum +no%10;
			no = no/10;
		}
		aux[i]=sum;
	}

	sort(aux,aux+n);
	int count=1;
	for(int i=0;i<n-1;i++){
		if(aux[i+1]!=aux[i]){
			count++;
		}
	}
	return count;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		cout<<lucky(a,n)<<endl;
	}
	return 0;
}
