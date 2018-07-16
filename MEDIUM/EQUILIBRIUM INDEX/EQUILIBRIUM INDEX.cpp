#include <bits/stdc++.h>
using namespace std;

 
int equilibrium(int arr[], int n)
{
    int sum = 0; 
    int leftsum = 0;
 
  
    for (int i = 0; i < n; ++i)
        sum += arr[i];
 
    for (int i = 0; i < n; ++i) {
        sum -= arr[i]; 
 
        if (leftsum == sum)
            return i+1;
 
        leftsum += arr[i];
    }
 
    
    return -1;
}
 
int main()
{
    // int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    // int arr_size = sizeof(arr) / sizeof(arr[0]);
    // cout<<equilibrium(arr, arr_size);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        }
        cout<<equilibrium(a,n)<<std::endl;
    }
    return 0;
}