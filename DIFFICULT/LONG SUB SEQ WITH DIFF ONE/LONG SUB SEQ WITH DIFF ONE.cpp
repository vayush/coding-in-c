// https://practice.geeksforgeeks.org/problems/longest-sub-sequence-such-that-difference-between-adjacents-is-one/0
// Longest sub-sequence such that difference between adjacents is one


#include<bits/stdc++.h>
using namespace std;

void longestsub(int arr[],int n){
	unordered_map<int,int> um;
	int longLen = 0;
	for (int i=0; i<n; i++)
    {
        
        int len = 0;
          
       
        
        if (um.find(arr[i]-1) != um.end() && 
            len < um[arr[i]-1])
            len = um[arr[i]-1];
          
            
        if (um.find(arr[i]+1) != um.end() && 
            len < um[arr[i]+1])
            len = um[arr[i]+1];    
          
        
        um[arr[i]] = len + 1;
          
        
        if (longLen < um[arr[i]])    
            longLen = um[arr[i]];


        cout<<longLen<<" "<<arr[i]<<" "<<um[arr[i]]<<" "<<len<<endl;
    }

    cout<<longLen<<endl;
    
}

int main(){
	int a[] = {10,9,4,5,4,8,6};
	int n = sizeof(a)/sizeof(a[0]);
	longestsub(a,n);

	return 0;
}