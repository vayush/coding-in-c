#include<bits/stdc++.h>
using namespace std;

int max_Sum(int a[],int n){
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }   
    int sum=0;
    sort(a,a+n);
    
    
    for(int i=n-1;i>=0;i--){
        if(m[a[i]]>0){

            sum = sum+a[i];
            if(m.find(a[i])!=m.end() && m[a[i]]>0){
                m[a[i]]--;
            }
            if(m.find(a[i]+1)!=m.end() && m[a[i]+1]>0){
                m[a[i]+1]--;
            }
            if(m.find(a[i]-1)!=m.end() && m[a[i]-1]>0){
                m[a[i]-1]--;
            }
        }
    }
    return sum;
}

int main(){
    int a[] = {9,15,9,3,8,4,6,17,7,11,17,7,3,18,13,9,7,12,2,8};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<max_Sum(a,n);
    return 0;
}