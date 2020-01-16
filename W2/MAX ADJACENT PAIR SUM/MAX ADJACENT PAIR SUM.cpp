// https://practice.geeksforgeeks.org/problems/why-is-melody-so-chocolaty/0

#include<iostream>
using namespace std;

int maxSum(long long int a[],int n){
    int maxsum=INT_MIN,currentsum=0;
    for(int i=0;i<n-1;i++){
        currentsum = a[i+1]+a[i];
        if(currentsum>maxsum){
            maxsum = currentsum;
        }
    }

    return maxsum;
}


int main(){
    long long int a[] = {5,2,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<maxSum(a,n);



    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     long long int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin>>a[i];
    //     }


    //     cout<<maxSum(a,n)<<endl;
    // }

    return 0;
}