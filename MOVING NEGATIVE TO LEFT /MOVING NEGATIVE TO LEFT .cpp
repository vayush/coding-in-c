#include<iostream>
using namespace std;
void sortNeg(int a[],int n){
	int temp[n];
	int j=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			temp[j++]= a[i];
		}
	}
	if(j==n || j== 0){
		return;
	}
	for(int i=0;i<n;i++){
		if(a[i]<0){
			temp[j++]=a[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<temp[i]<<" " ;
	}
}
int main(){
	int a[]={1,-1,3,2,-7,-5,11,6};
	int n = sizeof(a)/sizeof(a[0]);
	sortNeg(a,n);
	return 0;
}