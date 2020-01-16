// https://practice.geeksforgeeks.org/problems/longest-valid-parentheses/0/?ref=self


#include<bits/stdc++.h>
using namespace std;

int longV(string s){

  stack<int> c;
  c.push(-1);
  int ans=0;

  for(int i=0;i<s.size();i++){
    if(s[i]=='('){
      c.push(i);
    }
    else{
      c.pop();

      if(!c.empty())
        ans = max(ans,i-c.top());
      else
        c.push(i);
    }
                
  }
  return ans;
}



int main(){
  
	string s = "(()";
	cout<<longV(s)<<endl;


  // int t;
  // cin>>t;
  // cin.ignore();
  // while(t--){

  //   string s;
  //   getline(cin,s);
  //   cout<<longV(s)<<endl;
  // }

  return 0;
}