#include <iostream>
using namespace std;
void leaderArray(int arr[],int n){
int cMax=arr[n-1];
cout<<cMax<<"  ";
	for(int i=n-2;i>=0;i--){
		if(arr[i]>cMax){
			cMax = arr[i];
			cout<<cMax<<"  ";
		}
	}
}
int main(){
	int arr[] = {16,17,4,3,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	leaderArray(arr,n);
	return 0;
}