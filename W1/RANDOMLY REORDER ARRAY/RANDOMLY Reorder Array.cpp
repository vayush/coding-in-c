#include <iostream>
#include <math.h>
using namespace std;
void reorder(int a[],int n){
	int pick,temp,i;
	for(i=n-1;i>=1;i--){
		pick = floor((i+1)*rand());
		temp = a[i];
		a[i] = a[pick];
		a[pick] = temp ;
	}
	for(i=0;i<n;i++){
		cout<<a[i];
	}
}
int main(){
	int n;
	cin>>n;
	int arr[10];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	reorder(arr,n);
	return 0;
}