#include<iostream>
using namespace std;
void tripletsZero(int a[],int n,int u){
  sort(a,a+n);
  for(int i=0;i<n-1;i++){
    int x = a[i];
    int l = i+1;
    int r = n-1;
    while(l<r){
      if(x+a[l]+a[r] == u){
        cout<<x<<" "<<a[l]<<" "<<a[r]<<endl;

        l++;r--;
      }
      else if(x+a[l]+a[r]>u)
        r--;
      else
        l++;
    }
  }
}

int main(){
  int a[] = {0,-1,2,-3,1};
  int n = sizeof(a)/sizeof(a[0]);
  tripletsZero(a,n,1);
  return 0;
}