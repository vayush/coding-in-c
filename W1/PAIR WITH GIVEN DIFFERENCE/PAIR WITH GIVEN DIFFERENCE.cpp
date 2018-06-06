#include<iostream>
using namespace std;
int difGiven(int a[],int n,int item){
  int i=0,j=1;
  sort(a,a+n);
 while(i<n  && j<n){
  if(a[j]-a[i] == item){
    return 1;
  }
  else if(a[j]-a[i]<item)
    j++;
  else 
    i++;
 }
 return -1;
}
int main(){
  int a[]={10,30,3,2,20,10};
  int n=sizeof(a)/sizeof(a[0]);
 cout<<difGiven(a,n,10);
  return 0;
}