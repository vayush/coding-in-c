#include<bits/stdc++.h>
using namespace std;

int findMinDiff(int a[],int n,int m){
    if(m==0 || n==0)
        return 0;

    sort(a,a+n);

    

    if(n<m)
        return -1;

    int min_diff = INT_MAX;
    // int first =0, last=0;
    for(int i=0;i<=n-m;i++){
        // cout<<i<<endl;
        int diff = a[i+m-1] - a[i];
        if(diff< min_diff){

            min_diff = diff;

        }
    }
    return min_diff;
}

int main(){
    // int a[] = {12, 4, 7, 9, 2, 23, 25, 41,30, 40, 28, 42, 30, 44, 48,43, 50};
    // int n = sizeof(a)/sizeof(a[0]);
    // cout<< findMinDiff(a, n, 7);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        }
        int m;
        cin>>m;
        cout<< findMinDiff(a, n, m)<<endl;
    }

    return 0;
}