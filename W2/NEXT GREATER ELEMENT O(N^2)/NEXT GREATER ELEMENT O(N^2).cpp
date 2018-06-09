#include<iostream>
#include<vector>
using namespace std;

int nextGreater(int a[],int n){
    vector <int> v;

    for (int i = 0; i < n; i++)
    {
        if(i==n-1){
            v.push_back(0);
            break;
        }
        int j = i+1;

        if(a[j]>a[i]){
            v.push_back(a[j]);
        }
        else if(a[j]<=a[i]){
            for (int k = j; k<n ; k++)
            {
                
                if(a[k]>a[i]){
                    v.push_back(a[k]);
                    break;
                }
            }
        }
    }
    long long int sum=0;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
        sum = sum+v[i];
    }
    return sum;
 }

int main(){
    // int a[] = {112,133,161,311,122,512,1212,0,19212};
    // int n = sizeof(a)/sizeof(a[0]);
    // cout<<nextGreater(a,n)<<endl;


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        cout<<nextGreater(a,n)<<endl;
    }
}