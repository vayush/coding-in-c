// https://practice.geeksforgeeks.org/problems/the-inverting-factor/0

#include<iostream>
using namespace std;
int revno(int a){
    int rev=0,rem;
    while(a > 0){
        rem = a%10;
        rev = (rev*10) + rem ;
        a/= 10;
    }
    return rev;
}
int invfactor(int a[],int n){

    int result=INT_MAX;
    for(int i=0;i<n;i++){
        int n =revno(a[i]);
        a[i]=n;
    }
    sort(a,a+n);
    for(int i=n-1;i>=1;i--){
        int n = a[i]-a[i-1];
        if(n<result){
            result = n;
        }
    }
    return result;

}
int main(){
     int t;
     cin>>t;
     while(t--){

        int n;
        cin>>n;
        int a[n];   
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<invfactor(a,n)<<endl;
     }
     return 0;
}