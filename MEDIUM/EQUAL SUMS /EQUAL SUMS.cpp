// https://practice.geeksforgeeks.org/problems/equal-sums/0
// Equal Sums
#include <iostream>
using namespace std;
void equalSums(int a[],int n){
	int lsum=0,rsum=0;
	for (int i = 0; i < n; i++)
	{
		rsum=rsum + a[i];
	}
	int index,i=0,x;

	x=abs(rsum-lsum);

	while(lsum<rsum){
		lsum = lsum + a[i];
		rsum = rsum -a[i];
		if(abs(rsum-lsum)<x){
			x= abs(rsum-lsum);
			index = i;
		}
		i++;
	}

	lsum=0;
	rsum=0;

	for (int i = 0; i <= index; ++i)
	{
		lsum = lsum+a[i];
	}
	for (int i = n-1; i > index; i--)
	{
		rsum = rsum+a[i];
	}


	if(lsum<=rsum){
		cout<<x<<" "<<index+2<<" "<<"1"<<endl;
	}
	if(rsum<lsum){
		cout<<x<<" "<<index+2<<" "<<"2"<<endl;
	}
}
int main(){
	// int a[] = {3,2,2,3};
	// int n = sizeof(a)/sizeof(a[0]);
	// equalSums(a,n);
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
		equalSums(a,n);
	}
	return 0;
}