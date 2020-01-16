#include<bits/stdc++.h>
using namespace std;


void print(int a[],int start,int end){
	for(int i=start;i<=end;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


void printAll(int a[],int n){
	map<int,int>m;
	int sum =0;
	for(int i=0;i<n;i++){
		sum = sum+a[i];

		if(sum == 0)
			print(a,0,i);
		
		if(m.find(sum)!=m.end()){

			print(a,m[sum]+1,i);
		}
		else
			m[sum] = i;

		
	}
}


int main(){
	int a[] = {3,4,-7,3,1,3,1,-4,-2,-2};
	int n = sizeof(a)/sizeof(a[0]);
	printAll(a,n);

	return 0;
}