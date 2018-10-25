// https://practice.geeksforgeeks.org/problems/game-with-string/0

#include<bits/stdc++.h>
using namespace std;

void ans(int a[],int n,int k){
  sort(a,a+n);
  for(int i=0;i<k;i++){
    
    a[n-1]--;
    sort(a,a+n);
  }

  long int ans=0;

  for (int i = 0; i < n; i++)
  {
    ans = ans + (a[i]*a[i]);
  }
  cout<<ans<<endl;
}

void game(string s1,int k){

  map<string,int>m;
  string ss = "";
  int count=0;
  for(int i=0;i<s1.length();i++){
    ss = s1[i];
    m[ss]++;
  }
  
  for(auto it = m.begin();it!=m.end();it++){
   count++;
   // cout<<it->second<<" "<<count<<endl;
  }
  int a[count],i=0;
  

  for(auto it = m.begin();it!=m.end();it++){
    a[i++]=it->second; 
  }
  ans(a,count,k);
}


int main(){
  // string s1 = "egsdhatazqwtlkokhllblvcikppyrbhvkbaretudmsyxcmjkyunlqptagiaymivwlwpprlvddtdggmsghhrxxkzfvadhkbfvxu";
  
  // game(s1,88);
  int t;
  cin>>t;
  
  while(t--){
    cin.ignore();
    string s;
    getline(cin,s);
    int k;
    cin>>k;
    game(s,k);
  }

  return 0;
}