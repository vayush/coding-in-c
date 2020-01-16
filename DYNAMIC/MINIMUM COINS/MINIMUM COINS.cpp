#include<bits/stdc++.h>
using namespace std;

int amt(int a[],int n ,int amount){
  int cache[amount+1];
  for(int i=0;i<=amount;i++){
    cache[i]=amount+1;
  }

  cache[0]=0;

  for(int i=1;i<=amount;i++){
    for(int j=0;j<n;j++){
      if(a[j]<=i){
        cache[i] = min(cache[i],cache[i-a[j]]+1);
      }
    }
  }

  return cache[amount];


}


int main(){
  int a[]={3,5,10};
  int n= sizeof(a)/sizeof(a[0]);
  cout<<amt(a,n,20z);

  return 0;
}