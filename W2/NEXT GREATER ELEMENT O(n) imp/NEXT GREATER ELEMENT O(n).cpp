// https://practice.geeksforgeeks.org/problems/save-gotham/0
#include <iostream>
#include <stack>
using namespace std;
int nextGreater(int a[],int n){
    stack<int> s;
    s.push(a[0]);
    long long int sum=0;
    int i;
    for(i=1;i<n;i++){

        if(a[i]>s.top()){
            while(!s.empty() && a[i]>s.top()){
                sum=sum+a[i];
                // cout<<a[i]<<" ";
                s.pop();
            } 
            s.push(a[i]);
        }
        else if(a[i]<s.top()){
            s.push(a[i]);
        }
        // if(i==n-1){
        //     cout<<"0 ";
        // }
    }

    return sum;
}
int main(){
    int a[] = {112,133,161,311,122,512,1212,0,19212};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<nextGreater(a,n)<<endl;


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

    //     cout<<nextGreater(a,n)<<endl;;
    // }
    return 0;
}