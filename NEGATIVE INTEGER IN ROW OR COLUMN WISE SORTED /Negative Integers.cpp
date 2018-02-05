#include <iostream>
using namespace std;
int negFound(int a[5][5],int n){
	int i=0,j=n-1,count=0;
	while(i<n && j>=0){
		if(a[i][j]<0){
			count+=(j+1);
			i++;
		}
		else
			j--;
	}
	return count;
}
int main(){
	int n,a[5][5];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<negFound(a,n);
	return 0;
}