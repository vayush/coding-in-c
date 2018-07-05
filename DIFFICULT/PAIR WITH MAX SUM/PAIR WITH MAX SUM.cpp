// https://practice.geeksforgeeks.org/problems/number-of-pairs-with-maximum-sum/0
// Number of pairs with maximum sum

#include<bits/stdc++.h>
using namespace std;
int sum (int a[],int n){
	int maxvalue = a[0];
	int maxcount=1;
	int secondmax = INT_MIN;
	int secondcount = INT_MIN;
	for (int i = 1; i < n; ++i)
	{
		if(a[i] == maxvalue)
			maxcount++;
		else if(a[i]>maxvalue){
			secondmax  = maxvalue;
			secondcount = maxcount;
			maxvalue = a[i];
			maxcount = 1;
		}

		else if(a[i]== secondmax){
			secondmax = a[i];
			secondcount++;
		}

		else if (a[i] > secondmax) {
            secondmax = a[i];
            secondcount = 1;
        }


     // cout<<maxvalue<<" "<<maxcount<<" "<<secondmax<<" "<<secondcount<<endl;
	}
	if(maxcount>1)
		return maxcount * (maxcount-1)/2;

	return secondcount;
}
int main(){
	// int a[] = {1,1,1,2,2,2,3};
	// int n = sizeof(a)/sizeof(a[0]);
	// cout<<sum(a,n);
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
		cout<<sum(a,n)<<endl;
	}
	return 0;
}