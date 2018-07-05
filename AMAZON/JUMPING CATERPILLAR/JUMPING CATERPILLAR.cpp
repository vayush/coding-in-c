// https://practice.geeksforgeeks.org/problems/jumping-caterpillars/0

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void jumpingCaterpillars(int a[],int n,int k){
    vector<int>v;
    for(int i=0;i<k;i++){
        for(int j=a[i];j<=n;j=j+a[i]){
            v.push_back(j);
        }
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    set<int> s( v.begin(), v.end() );
    v.assign( s.begin(), s.end() );

    int l=0;
    int z=1;
    int count=0;
    while(z<=n ){
        if(v[l]!= z){
            count++;
            // v1.push_back(z);
            z++;
        }
        else {
            z++;
            l++;
        }

    }
    // for (int i=0; i<v1.size(); i++)
    // {
    //     cout<< v1[i]<< " ";
    // }
    // cout<<endl;
    cout<<count<<endl;
}

int main(){

    int a[]={2,3,5};
    jumpingCaterpillars(a,10,3);

    // int t;
    // cin>>t;
    // while(t--){
    //     int n,k;
    //     cin>>n>>k;
    //     int a[k];
    //     for (int i = 0; i < k; i++)
    //     {
    //         cin>>a[i];
    //     }
    //     jumpingCaterpillars(a,n,k);
    // }
    return 0;
}