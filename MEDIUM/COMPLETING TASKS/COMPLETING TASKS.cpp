// https://practice.geeksforgeeks.org/problems/completing-tasks/0
// Completing tasks

#include<bits/stdc++.h>
using namespace std;

void completeTask(int a[],int ntotal,int n){
  map<int,int> m;
  vector<int> manya;
  vector<int> tanya;
  for (int i = 0; i < n; ++i)
  {
    m[a[i]] ;
  }
  
 int j = 0;
 for (int i = 1; i <= ntotal; i++)
 {
   if(m.find(i)==m.end() && j%2==0){
    tanya.push_back(i);
    j++;
   }
   else if(m.find(i) == m.end() && j%2!=0){
    manya.push_back(i);
    j++;
   }
 }
    
 for(auto x:tanya){
  cout<<x<<" ";
 }
 cout<<std::endl;

 for(auto x:manya){
  cout<<x<<" ";
 }
 cout<<endl;
}

int main(){
  // int ntotal= 5; 
  // int a[] = {2,4}; 
  // int n = sizeof(a)/sizeof(a[0]);
  // completeTask(a,ntotal,n);
  int t;
  cin>>t;
  while(t--){
    int ntotal;
    cin>>ntotal;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    completeTask(a,ntotal,n);
  }


  return 0;
}