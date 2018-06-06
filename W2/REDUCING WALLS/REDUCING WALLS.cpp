// https://practice.geeksforgeeks.org/problems/reducing-walls/0

#include<iostream>
using namespace std;

int reducingwalls(long int a[],int n,long int k){
    int count=0;
    for(int i=0;i<n;i++)
        {
            count=count+a[i]/k;
            if(a[i]%k==0)
            count--;
        }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long int k;
        cin>>n;
        cin>>k;
        long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        cout<<reducingwalls(a,n,k)<<endl;
    }

    return 0;
}