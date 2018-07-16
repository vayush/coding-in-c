// https://www.geeksforgeeks.org/print-left-rotation-array/
#include<iostream>
using namespace std;

void leftRotate(int a[],int n,int k){

  for(int i=k;i<n+k;i++){

    cout<<a[i%n];
  }
}
int main(){
  int a[]={1,2,3,4,5};
  int n = sizeof(a)/sizeof(a[0]);
  leftRotate(a,n,2);
  return 0;
}