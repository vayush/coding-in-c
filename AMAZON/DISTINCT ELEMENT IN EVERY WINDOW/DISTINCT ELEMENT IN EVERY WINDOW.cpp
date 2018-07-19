#include<bits/stdc++.h>
using namespace std;

void distinctElement(int a[],int n,int k){
    int count=0;
    map<int,int> m;
    for (int i = 0; i < k; i++)
    {
        if(m[a[i]]==0)
            count++;

        m[a[i]]++;
    }

    cout<<count<<" ";

    for(int i=k;i<n;i++){

        if (m[a[i-k]] == 1)
        {
            count--;
        }
        m[a[i-k]] -= 1;

        if(m[a[i]]==0)
            count++;

        m[a[i]] +=1;

        cout<<count<<" ";
    }
    cout<<endl;
}


int main(){
    int a[] = {1,2,1,3,1,2,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    distinctElement(a,n,4);
    // int t;
    // cin>>t;
    // while(t--){
    //     int n,k;
    //     cin>>n>>k;
    //     int a[n];
    //     for(int i=0;i<n;i++){
    //     cin>>a[i];
    //     }
    //     distinctElement(a,n,k);
    // }

    return 0;
}