#include <iostream>
using namespace std;
void bubsort(int a[],int n){

	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
			flag=1;
			}
		}
		if(flag==0)
			break;
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
	return 0;
}
