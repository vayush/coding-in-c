#include<bits/stdc++.h>
using namespace std;

void getGold(vector<vector<int> >&v,int m,int n){

  
  vector<vector<int> >ans(m,vector<int>(n,0));


  
  
  for(int row=0;row<m;row++){
    for(int col=n-1;col>=0;col--){

      

      int right = (col==n-1)? 0: ans[row][col+1]; 
  
           
            int right_up = (row==0 || col==n-1)? 0: 
                            ans[row-1][col+1]; 
  
            
            int right_down = (row==m-1 || col==n-1)? 0: 
                             ans[row+1][col+1]; 
  
            
            ans[row][col] = v[row][col] + 
                              max(right, max(right_up, right_down));



      
    }
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }

}

int main(){
  vector<vector<int> >v;

  v = {{1,3,1,5},
       {2,2,4,1},
       {5,0,2,3},
       {0,6,1,2}};

  int m = v.size();
  int n = v[0].size();

 

  getGold(v,m,n);

  return 0;
}