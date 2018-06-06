#include <iostream>
using namespace std;
int contiguousArray(int a[],int n){
  int max_len=1;
  int mn,mx;
  for(int i=0;i<n-1;i++){
    mn=a[i],mx=a[i];
    for(int j=i+1;j<n;j++){
      mn=min(mn,a[j]);
      mx=max(mx,a[j]);

       if((mx - mn) == j-i)
      max_len = max(max_len,mx-mn+1);
    }
   
  }
  return max_len;
}
int main(){
  int a[]={1, 56, 58, 57,90, 92, 94, 93, 91, 45};
  int n = sizeof(a)/sizeof(a[0]);
  cout<<contiguousArray(a,n);
  return 0;
}