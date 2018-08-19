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
	cout<<si<<"  "<<ei<<"\n";
	return mg;
}
int main(){
	int arr[]={10,-83,-87,14,9,-84,35,-49,-100,-51,19,56,98,3,-76,-92,-56,-91,89,2,95,-15};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<maxSubArray(arr,n)<<"   ";
	return 0;
}