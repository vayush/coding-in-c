// https://practice.geeksforgeeks.org/problems/hungry-pizza-lovers/0

#include <iostream>
#include<vector>

using namespace std;

void order(int a[],int b[],int n){
    int c[n];
    for (int i = 0; i < n; i++)
    {
        c[i]=a[i]+b[i];
    }

    vector<pair<int,int> > v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(c[i],i+1));
    }
    sort(v.begin(),v.end());

    for (int i=0; i<n; i++)
    {
        cout<< v[i].second << endl;
    }
}   


int main(){
    // int x[]={4,6,7,8,1};
    // int y[]={1,2,6,1,3};
    // int n = sizeof(x)/sizeof(x[0]);
    // order(x,y,n);


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x[n],y[n];
        for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }

        order(x,y,n);
    }
    return 0;
}