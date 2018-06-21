// PERFECT ARRAY

#include<bits/stdc++.h>
using namespace std;


void perfectArray(int a[],int n){
  
  int i=1;

  while(a[i]>a[i-1] && i<n){
    i++;
  }

  while(a[i] == a[i-1] && i<n){
    i++;
  }

  while(a[i] < a[i-1] && i<n){
    i++;
  }

  if(i==n){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }

}


int main(){
  // int a[] = {1,8,8,8,3,2};
  // int n = sizeof(a)/sizeof(a[0]);
  // perfectArray(a,n);

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    perfectArray(a,n);
  }
  return 0;
}