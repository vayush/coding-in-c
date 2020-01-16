#include<iostream>
using namespace std;
void sumtox(int a[],int n,int s){
  sort(a,a+n);

  for (int i = 0; i < n-1; i++)
  {
    int x = a[i];
    int l = i+1;
    int r = n-1;
    while(l<r){
    if(x + a[l]+a[r] == s){
      cout<<x<<" "<<a[l]<<" "<<a[r]<<"\n";
      l++;
      r--;
    }
    else if(x + a[l]+a[r]<s)
      l++;
    else
      r--;
   }
 }
}
int main(){
  int a[]={0,-1,2,-3,1};
  int n = sizeof(a)/sizeof(a[0]);
  sumtox(a,n,1);
  return 0;
}