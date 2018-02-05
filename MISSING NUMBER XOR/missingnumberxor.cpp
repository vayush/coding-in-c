#include <iostream>
using namespace std;
int getMiss(int a[],int n){
	int x1,x2,i;
	x1=a[0];
	x2=1;	
	for(i=1;i<n;i++){
		x1=x1^a[i];
	}
	for(i=2;i<=n+1;i++){
		x2=x2^i;
	}
	return (x1^x2);
}
int main(){
	int a[]={1,2,3,4,5,6,8};
	cout<<getMiss(a,6);
	return 0;
}