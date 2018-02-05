#include <iostream>
using namespace std;

int maxfind(int a[],int n){
	int max,i,pos=0;
	max=a[0];
	pos=0;
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
			pos=i;
		}
	}
	return pos;
}
void sortarray(int a[],int n){
	int max,t;
	if(n>1){
		max=maxfind(a,n);
		t=a[n-1];
		a[n-1]=a[max];
		a[max]=t;
		sortarray(a,n-1);
		}
}
int main(){
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	sortarray(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}	
	return 0;
}