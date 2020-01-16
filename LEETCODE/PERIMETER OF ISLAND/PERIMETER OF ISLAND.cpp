#include<bits/stdc++.h>
using namespace std;

int neighbour(vector<vector<int>>&v, int i, int j) 
{ 

    int R = v.size();
    int C = v[i].size(); 
    int count = 0;  
  

    if (i > 0 && v[i - 1][j]) 
        count++; 

    if (j > 0 && v[i][j - 1]) 
        count++; 

    if (i < R-1 && v[i + 1][j]) 
        count++; 
    
    if (j < C-1 && v[i][j + 1]) 
        count++; 
  
    return count; 
}


int sol(vector<vector<int>>&v){
    int perimeter=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(v[i][j] == 1){
                perimeter += (4-neighbour(v,i,j));
            }
        }
    }

    return perimeter;
}


int main(){
    vector<vector<int>>v = {{0,1,0,0},
                            {1,1,1,0},
                            {0,1,0,0},
                            {1,1,0,0}};

    cout<<sol(v);
    return 0;
}   