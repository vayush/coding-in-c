// https://practice.geeksforgeeks.org/problems/maximum-sum-of-increasing-order-elements-from-n-arrays/0
// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;

    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        int a[n][m];
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cin >> a[i][j];
            }
        }
        for(int i = 0;i < n;i++) {
            sort(a[i],a[i]+m);
        }

        int sum = a[n-1][m-1];
        int prev = a[n-1][m-1];
        int i,j,count=1;
        for(i= n-2;i>=0;i--){

            for(j=m-1;j>=0;j--){
                if(a[i][j]<prev){
                    prev = a[i][j];
                    count++;
                    sum = sum+prev;
                    break;
                }
            }
        }

        if(j==-1 || count<n){
            cout<<"0"<<endl;;
        }
        else
            cout<<sum<<endl;
    }  


    return 0;
}