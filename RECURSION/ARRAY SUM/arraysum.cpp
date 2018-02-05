#include <iostream>
using namespace std;
int sumrecur(int a[],int n){
	if(n==0){
		return a[0];
	}

	return(a[n]+sumrecur(a,n-1));
}
int main(){
	int a[10],n;
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<sumrecur(a,n);
	cout<<endl;
	return 0;
}