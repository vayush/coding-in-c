#include<iostream>
using namespace std;

int sum(int a[],int n){
    if(n==0){
        return 0;
    }

    int chotaArray[100];
    for(int i=1;i<n;i++){
        chotaArray[i-1]=a[i];
    }
    ///Recursive Case
    int total = a[0] + sum(chotaArray,n-1);
    return total;
}
int sum2(int a[],int n){
    if(n==0){
        return 0;
    }
    int total = a[n-1] + sum2(a,n-1);
}
int sum3(int a[],int i,int n){
    if(i==n){
        return 0;
    }
    int total = a[i] + sum3(a,i+1,n);
    return total;
}


int main(){
    int a[] = {1,2,3,4,5,6};
    cout<<sum(a,6)<<endl;
    cout<<sum2(a,6)<<endl;
    cout<<sum3(a,0,6)<<endl;

return 0;
}
