#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&v,int i,int j,int count){
    if(i<0||i>=v.size() || j<0 || j>=v[i].size() || v[i][j]<count){
        return ;
    }
    v[i][j] = count;
    dfs(v,i+1,j,count+1);
    dfs(v,i-1,j,count+1);
    dfs(v,i,j+1,count+1);
    dfs(v,i,j-1,count+1);


}


void sol(vector<vector<int>>&v){
    // int perimeter=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(v[i][j] == 0){
                dfs(v,i,j,0);
            }
        }
    }


    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    vector<vector<int>>v = {{INT_MAX,-1,0,INT_MAX},
                            {INT_MAX,INT_MAX,INT_MAX,-1},
                            {INT_MAX,-1,INT_MAX,-1},
                            {0,-1,INT_MAX,INT_MAX}};

    sol(v);
    return 0;
}   