// https://practice.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays/0
#include<iostream>
using namespace std;

void closestPair(int a[],int b[],int n,int m,int x){

	sort(a,a+n);
	sort(b,b+m);

	int l=0,r=m-1,diff=INT_MIN;
	int re1,re2;

	while(l<n && r>=0){

		if(abs(a[l]+b[r]-x)<diff){

			re1 = l;
			re2 = r;
			diff = abs(a[l] + b[r] - x);
		}

		if (a[l] + b[r] > x)
			r--;
		else
			l++;
	}
	cout<<a[re1]<<" "<<b[re2]<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m],x;

		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}

		for (int i = 0; i < m; i++)
		{
			cin>>b[i];
		}

		cin>>x;

		closestPair(a,b,n,m,x);
	}
	return 0;
}
	