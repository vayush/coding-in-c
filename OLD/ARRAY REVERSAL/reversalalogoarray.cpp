#include <iostream>
using namespace std;
void areverse(int a[],int start,int end){
	int temp;
	while(start < end){
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
}
void arotate(int a[],int size,int d){
	areverse(a,0,d-1);
	areverse(a,d,size-1);
	areverse(a,0,size-1);
}
void printarray(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<a[i];
	}
	cout<<" ";
}
int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
   int size = sizeof(a)/sizeof(a[0]);
	arotate(a,size,5);
	printarray(a,size);
	return 0;
}