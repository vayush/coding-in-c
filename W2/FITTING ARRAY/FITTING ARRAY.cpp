

// https://practice.geeksforgeeks.org/problems/fitting-the-array/0
#include<iostream>
#include <algorithm>
using namespace std;

int arrayfit(int a[],int b[],int n){

    sort(a,a+n);
    sort(b,b+n);
    int m=0;
    for(int i=0;i<n;i++){
        if(a[i]<=b[i])
            m++;
    }
    if(m==n){
        return 1;
    }
    else
        return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,size;
        cin>>n;
        int a[n],b[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        size = sizeof(a)/sizeof(a[0]);
        int z=arrayfit(a,b,size);

        if(z==1){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}