#include<bits/stdc++.h>
using namespace std;


int trappedWater(int a[],int n){

	int leftmax=0,rightmax=0;
	int l=0,r=n-1;
	int ans=0;

	while(l<=r){
		// if left wall is smaller
		if(a[l]<a[r]){
			// check wether rhe element is greater than left max
			if(a[l]>leftmax)
				leftmax = a[l];

			else
				ans = ans + leftmax-a[l];

			l++;
		}
		else{
			
			if(a[r]>rightmax)
				rightmax = a[r];

			else
				ans = ans + rightmax-a[r];

			r--;
		}
	}
	return ans;
}

int main(){
	// int a[] = {7,1,4,0,2,8,6,3,5};
	// int n = sizeof(a)/sizeof(a[0]);
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
		cout<<trappedWater(a,n)<<endl;
	}
	
	return 0;
}