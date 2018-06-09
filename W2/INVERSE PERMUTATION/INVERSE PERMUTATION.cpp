// https://practice.geeksforgeeks.org/problems/inverse-permutation/0

#include <iostream>
using namespace std;

void permute(int a[],int n){
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[a[i]-1]=i+1;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[] = {5,1,2,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    permute(a,n);

    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin>>a[i];
    //     }

    //     permute(a,n);
    // }

    return 0;
}
