#include<bits/stdc++.h>
using namespace std;


int search(vector<vector<int>>&v,int i,int j){

    if(i<0 || i>=v.size() || j<0 || j>=v[i].size() || v[i][j] == 0){
        return 0;
    }

    v[i][j]=0;

    int count=1;
    count = count+search(v,i+1,j);
    count = count+search(v,i-1,j);
    count = count+search(v,i,j+1);
    count = count+search(v,i,j-1);
    count = count+search(v,i+1,j+1);
    count = count+search(v,i-1,j+1);
    count = count+search(v,i+1,j-1);
    count = count+search(v,i-1,j-1);


    return count;
}

int sol(vector<vector<int>>&v){

    int maxx=0;
    int count=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(v[i][j] == 1){
                int x = search(v,i,j);
                count++;
                maxx = max(maxx,x);
            }
        }
    }
    cout<<"TOTAL NUMBER OF ISLAND"<<" "<<count<<endl;
    return maxx;
}


int main(){
    vector<vector<int>>v = {{1,0,1,0,1},
                            {1,1,0,1,0},
                            {0,1,0,0,1}};

    cout<<sol(v);
    return 0;
}   