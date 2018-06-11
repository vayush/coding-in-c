// https://practice.geeksforgeeks.org/problems/making-elements-distinct/0

#include <iostream>
using namespace std;
void distinctEl(int a[],int n){
    int sum = a[0], prev = a[0];
 
    for (int i = 1; i < n; i++) {
        cout<<sum<<" "<<prev<<" "<<endl;
        if (a[i] <= prev) {
            prev = prev + 1;
            sum = sum + prev;
        }
        else {
            sum = sum + a[i];
            prev = a[i];
        }
    }
    cout<<sum<<endl;
}
int main(){

    int a[] = {2,2,3,4,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    distinctEl(a,n);
    // int t;
    // cin>>t;
    // while(t--){
    //     int n ;
    //     cin>>n;
    //     int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin>>a[i];
    //     }
    //     distinctEl(a,n);
    // }
    // return 0;
}