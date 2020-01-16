#include<iostream>
using namespace std;
int difGiven(int a[],int n,int item){
  int i=0,j=n-1;
  sort(a,a+n);
 while(i<n  && j>=0){
  if(abs(a[j]-a[i]) == item){
    return 1;
  }
  else if(a[j]-a[i]<item)
    i++;
  else 
    j--;
 }
 return -1;
}
int main(){
  int a[]={5, 20, 3, 2, 50, 80};
  int n=sizeof(a)/sizeof(a[0]);
 cout<<difGiven(a,n,79);
  return 0;
}