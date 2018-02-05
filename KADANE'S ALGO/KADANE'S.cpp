#include <iostream>
using namespace std;
int maxSubArray(int a[],int n){
	int mc,mg,si=0,ei=0,s=0;
	// mc = maxcurrent mg= maxglobal
	// si = starting index , ei 
	mc=a[0];
	mg=a[0];
	for(int i=0;i<n;i++){
		mc = max(mc+a[i],a[i]);
		if(mc>mg){
			mg=mc;
			si=s;
			ei=i;
		}
		if(mc<0){
			mc = 0;
			s=i+1;
		}
	}
	cout<<a[si]<<"  "<<a[ei]<<"\n";
	return mg;
}
int main(){
	int arr[]={1,-3,2,1,-1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<maxSubArray(arr,n)<<"   ";
	return 0;
}