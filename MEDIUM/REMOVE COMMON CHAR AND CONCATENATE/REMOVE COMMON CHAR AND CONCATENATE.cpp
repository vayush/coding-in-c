https://practice.geeksforgeeks.org/problems/remove-common-characters-and-concatenate/0
#include<bits/stdc++.h>
using namespace std;

void fn(string s1,string s2){
  char s ;
  string ss = "";
  bool f=0;
  map<char,int> m1;
  map<char,int> m2;

  for(int i=0;i<s1.length();i++){
    s = s1[i];
    m1[s]++;
  }


for(int i=0;i<s2.length();i++){
    s = s2[i];
    m2[s]++;
  }

  for(int i=0;i<s1.length();i++){
    if(m2.find(s1[i])==m2.end()){
      ss = ss + s1[i];
      f=1;
    }
    
  }

  for(int i=0;i<s2.length();i++){
    if(m1.find(s2[i])==m1.end()){
      ss = ss + s2[i];
      f=1;
    }
  }
  if(f==1){
    cout<<ss<<endl;
  }
  else{
    cout<<-1<<endl;
  }
}

int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s1 = "";
    string s2 = "";
    cin>>s1;
    cin>>s2;
    
    fn(s1,s2);
    
  }
  return 0;
}