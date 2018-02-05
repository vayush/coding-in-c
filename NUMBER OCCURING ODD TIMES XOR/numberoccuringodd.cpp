#include <iostream>
using namespace std;
int finOdd(int arr[],int n){
	int a;
	a=arr[0];
	for(int i=1;i<n;i++){
		a=a^arr[i];
	}
	return (a);
}
int main(){
	int arr[]={1,2,3,2,3,3,3,4,1};
	int n;
	n= sizeof(arr)/sizeof(arr[0]);
	cout<<finOdd(arr,n);
	return 0;
}