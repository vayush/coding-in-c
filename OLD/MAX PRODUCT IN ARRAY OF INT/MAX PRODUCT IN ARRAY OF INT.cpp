#include<iostream>
#include<climits>
using namespace std;
int maxProd(int a[],int n){
  int maxp1=INT_MIN, maxp2=INT_MIN;
  int maxn1=INT_MAX, maxn2=INT_MAX;

  if(n<2){
    cout<<"NO PAIRS EXIST"<<endl;
    return 0;
  } 
  if(n==2){
    cout<<a[0]<<" "<<a[1] <<endl;
  }

  for(int i=0;i<n;i++){
    if(a[i]>maxp1){
      maxp2=maxp1;
      maxp1=a[i];
    }
    else if(a[i]>maxp2){
      maxp2=a[i];
    }

    if(a[i]<maxn1){
      maxn2 = maxn1;
      maxn1 = a[i];
    }
    else if(a[i]<maxn2){
      maxn2=a[i];
    }
  }
  return ((maxp1*maxp2)>(maxn1*maxn2)?(maxp1*maxp2):(maxn1*maxn2));
}


int main(){
  int a[]={1,4,3,6,7,0,-9,-8};
  int n = sizeof(a)/sizeof(a[0]);
  cout<<maxProd(a,n);
  return 0;
}