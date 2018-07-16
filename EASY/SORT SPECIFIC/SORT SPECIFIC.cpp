#include<bits/stdc++.h>
using namespace std;
void sortSpecific(int a[],int n){
    sort(a,a+n);
    int aux[n];
    int j=0;
    for (int i = n-1; i >=0; i--)
    {
        if(a[i]%2 !=0){
            aux[j] = a[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0){
            aux[j] = a[i];
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<aux[i]<<" ";
    }
    cout<<std::endl;
}
int main(){
    // int a[] = {1,2,3,5,4,7,10};
    // int n = sizeof(a)/sizeof(a[0]);
    // sortSpecific(a,n);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        }
        sortSpecific(a,n);
    }

    return 0;
}