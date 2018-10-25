// https://practice.geeksforgeeks.org/problems/sum-equals-to-sum/0#ExpectOP

#include<bits/stdc++.h>
using namespace std;

int sumtoSum(int a[],int n){

  map<int,int>m;

  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){

      m[a[i]+a[j]]++;

      if(m[a[i]+a[j]]>1){
        cout<<a[i]<<" "<<a[j]<<" ";
        return 1;
      }

    }
  }
  return 0;
} 



int main(){
  int a[] = {8,354,314,663,514,629,97,552,857,111,700,642,70};
  int n = sizeof(a)/sizeof(a[0]);
  cout<<sumtoSum(a,n)<<endl;
  // int t;
  // cin>>t;
  // while(t--){
  //   int n;
  //   cin>>n;
  //   int a[n];
  //   for(int i=0;i<n;i++){
  //   cin>>a[i];
  //   }
  //   cout<<sumtoSum(a,n)<<endl;
  // }

  // return 0;
}