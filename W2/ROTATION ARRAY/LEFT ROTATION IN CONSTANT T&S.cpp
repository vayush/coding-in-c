// https://www.geeksforgeeks.org/print-left-rotation-array/
#include<iostream>
using namespace std;

void leftRotate(int a[],int n,int k){

  for(int i=k;i<n+k;i++){

    cout<<(i%n);
  }
}
int main(){
  int a[]={1,3,5,7,9};
  int n = sizeof(a)/sizeof(a[0]);
  leftRotate(a,n,2);
  return 0;
}