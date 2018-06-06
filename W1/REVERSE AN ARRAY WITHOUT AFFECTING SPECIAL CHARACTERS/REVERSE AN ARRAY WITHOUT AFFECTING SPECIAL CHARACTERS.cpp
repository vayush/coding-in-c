#include<iostream>
using namespace std;
void withoutSpecial(string s,int n){
  int l=0,r=n-1;
  while(l<=r){

    if(!(s[l]>= 'a' && s[l]<='z'))
      l++;
    else if(!(s[r]>= 'a' && s[r]<='z'))
    r--;

    else{
      swap(s[l],s[r]);
      l++;
      r--;
    }
  }
  cout<<s;
}


int main(){
  string s="a!!!b.a.b,b,a,bbb";
  int n = sizeof(s)/sizeof(s[0]);
  withoutSpecial(s,n);
  return 0;
}