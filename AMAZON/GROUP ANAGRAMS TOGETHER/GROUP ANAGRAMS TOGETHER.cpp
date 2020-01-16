#include<bits/stdc++.h>
using namespace std;

void anagrams(string s[],int n){
  map<string ,int>m;
  for(int i=0;i<n;i++){
  string k = s[i];
  sort(k.begin(),k.end());
  m[k]++;
  }


  for(auto it = m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
  }
  
  vector<int>v;
  for(auto it = m.begin();it!=m.end();it++){
      v.push_back(it->second);
  }

  sort(v.begin(),v.end());
  for(auto x:v)
    cout<<x<<" ";
  cout<<endl;
}

int main(){
  string s[] = {"cat","dog","god","act","tac"};
  int n = sizeof(s)/sizeof(s[0]);
  // cout<<n;
  anagrams(s,n);

  // int t;
  // cin>>t;
  // cin.ignore();
  // while(t--){
  //   int n;
  //   cin>>n;
  //   string s[n];
  //   for(int i=0;i<n;i++){
  //   cin>>s[i];
  //   }
  //   anagrams(s,n);
  // }
  return 0;
}