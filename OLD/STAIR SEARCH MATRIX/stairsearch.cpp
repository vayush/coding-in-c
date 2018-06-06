#include <iostream>
using namespace std;
int stairsearch(int a[4][4],int n, int e){
	int i = 0 , j = n-1 ;
	while(i<n && j>=0){
		if(a[i][j] == e){
			cout<<"FOUND   "<<i<<" "<<j;
			return 1;
		}
		if(a[i][j]>e)
			j--;
		else
			i++;
	}
	cout<<"NOT FOUND :";
	return 0;
}
int main(){
	int n,e;
	cout<<"N <= 4 :";
	cin>>n;
	cout<<"\n";
	int a[4][4];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"ELEMENT TO SEARCH : ";
	cin>>e;
	cout<<"\n";
	stairsearch(a,n,e);
return 0;
}
