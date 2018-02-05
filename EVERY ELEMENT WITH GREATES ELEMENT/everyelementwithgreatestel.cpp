// https://www.youtube.com/watch?v=bLb8e83OK7o
#include <iostream>
using namespace std;
void greaterElement(int a[],int n){
	int maxRight,temp;
	maxRight=a[n-1];
	a[n-1]=-1;
	
	for(int i=n-2;i>=0;i--){
		temp=a[i];
		a[i]=maxRight;
		if(maxRight<temp){
			maxRight = temp;
		}
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"("<<a[i]<<")";;
		
	}
}
int main(){
	int a[]={16,17,4,3,5,2};
	int n;
	n=sizeof(a)/sizeof(n);
	greaterElement(a,n);
	print(a,n);
	return 0;
}