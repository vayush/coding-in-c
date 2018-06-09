// https://practice.geeksforgeeks.org/problems/tywins-war-strategy/0

#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

int trainTroops(long long int a[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        a[i] = (k - (a[i]%k)) % k;
    }
    sort(a,a+n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<endl;
    long long int sum=0;

    if(n%2==0){
        for (int i = 0; i < (n/2); i++)
        sum = sum+a[i];
    }
    else
        for (int i = 0; i < (n/2)+1; i++)
        sum = sum+a[i];

    cout<<"ANS IS ";
    return sum;
}
int main(){
    long long int a[]={2,3,4,9,8,7,6};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<trainTroops(a,n,4);


    // int t;
    // cin>>t;
    // while(t--){
    //     int n,k;
    //     cin>>n>>k;
    //     long long int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin>>a[i];
    //     }
    //     cout<<trainTroops(a,n,k)<<endl;
    // }
}