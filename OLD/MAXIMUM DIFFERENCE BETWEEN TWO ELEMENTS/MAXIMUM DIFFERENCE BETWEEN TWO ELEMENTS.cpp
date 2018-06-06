// https://www.youtube.com/watch?v=SO0bwMziLlU&list=PLqM7alHXFySEQDk2MDfbwEdjd2svVJH9p&index=27
#include<iostream>
#include<climits>
using namespace std;
int maxD(int a[],int n){
	int maxDif = INT_MIN;
	int minEl = a[0];
	for(int i=0;i<n;i++){
		if(a[i]-minEl > maxDif)
			maxDif = a[i]-minEl;
		if(a[i]<minEl)
			minEl = a[i];
	}
	return maxDif;
}


int main(){

	int a1[]={1,2,6,80,100};
	int n = sizeof(a1)/sizeof(a1[0]);
	cout<<maxD(a1,n)<<" ";
}