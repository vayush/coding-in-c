#include <iostream>
using namespace std;
int searchrecur(int a[],int n,int item){
	if(n==0)
		return n;
	for(int i=0;i<n;i++){
		if(a[i]==item){
			return i;
		}
	}
	return searchrecur(a,n-1,item);
}
int main(){
	int a[10],n,i,item;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>item;
	cout<<searchrecur(a,n,item)<<"   ";
	return 0;
}