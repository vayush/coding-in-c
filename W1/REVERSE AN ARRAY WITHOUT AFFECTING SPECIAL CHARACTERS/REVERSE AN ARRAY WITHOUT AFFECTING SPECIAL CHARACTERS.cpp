#include<iostream>
using namespace std;
void withoutSpecial(string s){
  int l=0,r=s.length()-1;
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
  withoutSpecial(s);
  return 0;
}