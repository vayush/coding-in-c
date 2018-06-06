// https://practice.geeksforgeeks.org/problems/reaching-the-heights/0
#include <iostream>
using namespace std;
void reachHeights(int a[],int n){
	sort(a,a+n);
	int b[n];
	int l=0,h=n-1,sum=0;
	for (int i = 0; i < n; i++)
	{
		if(i%2==0){
	        b[i]=a[h];
	        h--;
	            sum=sum+b[i];
	        }
	        else{
	        b[i]=a[l];
	        l++;
	            sum=sum-b[i];
	            if(sum==0)
	            break;
	        }
	}
	if(sum==0)
	    cout<<"Not Possible";
	    else
	    {
	        for(int i=0;i<n;i++)
	        cout<<b[i]<<' ';
	    }
	    cout<<endl;
}
int main(){
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
		reachHeights(a,n);
	}
	return 0;
}
