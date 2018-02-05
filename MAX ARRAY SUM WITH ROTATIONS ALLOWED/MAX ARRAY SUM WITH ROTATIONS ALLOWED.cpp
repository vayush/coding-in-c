#include <iostream>
using namespace std;
void aSort(int a[],int in[],int n){
	int temp[n];
	for(int i=0;i<n;i++){
		temp[i]=a[in[i]-1];
	}
	for(int i=0;i<n;i++){
		a[i]=temp[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){

	int a[]={10,11,12,13,14,15,16,17};
	int n = sizeof(a)/sizeof(a[0]);
	int in[]={8,7,6,5,4,3,2,1};
	aSort(a,in,n);
	return 0;
}