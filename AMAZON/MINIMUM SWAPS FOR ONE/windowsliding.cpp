#include<bits/stdc++.h>
using namespace std;

void minSwap(int a[],int n){
    int onecount=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==1){
            onecount++;
        }
    }
    int sum=0,index=onecount-1;
    for (int i = 0; i < onecount; i++)
    {
        sum = sum+a[i];
    }
    int maxsum = sum;
    for(int i=onecount;i<n;i++){
        sum = sum +a[i]-a[i-onecount];
        if(sum >maxsum){
            maxsum = sum;
            index = i;
        }
    }
    int count=0;

    for (int i = index; i >= index-onecount; i--)
    {
        // cout<<a[i]<<" ";
        if(a[i]==1){
            count++;
        }
    }
    if(count==0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<onecount-count<<endl;
    }
}

int main(){
    int a[] = {1,0,1,0,1};
    int n = sizeof(a)/sizeof(a[0]);
    minSwap(a,n);
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

    //     minSwap(a,n);
    // }
    
    return 0;
}