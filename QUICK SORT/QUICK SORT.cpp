// https://www.youtube.com/watch?v=PgBzjlCcFvc

#include<iostream>
#include<algorithm>
using namespace std;
int partition(int a[],int low,int high){
	int pivot=a[high];
	int i=low-1;

	for(int j=low;j<high;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[high]);
	return(i+1);
}
void quickSort(int a[],int low,int high){
	if(low<high){
	int pivot;
	pivot= partition(a,low,high);
	quickSort(a,low,pivot-1 );
	quickSort(a,pivot+1,high);
	}
}
int main(){
	int a[]={1,5,8,9,2,3};
	int n = sizeof(a)/sizeof(a[0]);
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}