#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;
int minDistance(int arr[],int n,int x,int y){
	int minDi = INT_MAX;
	int prev,i=0;
	for(i=0;i<n;i++){
		if(arr[i]==x || arr[i]==y){
			prev = i;
			break;
		}
	}
	for(i=prev;i<n;i++){
		if(arr[i]==x || arr[i]==y){
			if(arr[prev]!=arr[i] && (i-prev)<minDi){
				minDi = i-prev;
				prev=i;
			}
			else
				prev=i;
		}
	}
	return minDi;
}
int main(){
	int arr[]={2,5,3,5,4,4,1,3};
	int size;
	size = sizeof(arr)/sizeof(arr[0]);
	cout<<minDistance(arr,size,3,2);
	return 0;
}