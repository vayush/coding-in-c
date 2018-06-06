#include <iostream>
using namespace std;
void bubsort(int a[],int n){
	if(n==1)
		return;
	for(int i=0;i<n-1;i++){ //n-1 as i+1 cannpt be accessed
		if(a[i]>a[i+1]){
			swap(a[i],a[i+1]);
		}
		bubsort(a,n-1);
	}
}
int main(){
	int a[100],n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	bubsort(a,n);
	for(i=0;i<n;i++){
		cout<<a[i]<<"    ";
	}
	cout<<"\nARRAY SORTED"<<"  ";
	return 0;
}