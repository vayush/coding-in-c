// https://www.geeksforgeeks.org/next-greater-element/
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
        cout<<v[i]<<" ";
        sum = sum+v[i];
    }
    return sum;
 }

int main(){
    int a[] = {8467,6334,6500,9169,5724,1478,9358,6962,4464,5705,8145,3281,6827,9961,491,2995,1942,4827,5436,2391,4604,3902,153,292,2382,7421,8716,9718,9895,5447,1726,4771,1538,1869,9912,5667,6299,7035,9894,8703,3811};
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

    //     cout<<nextGreater(a,n)<<endl;
    // }
}