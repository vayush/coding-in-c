#include<bits/stdc++.h>
using namespace std;


bool dfs(vector< vector<char>>&v,string word,int i,int j,int count){
    if(count == word.length()){
        return true;
    }


    if(i<0 || i>=v.size() || j<0 || j>=v[i].size() || v[i][j] != word[count]){
        return false;
    }

    char temp;
    temp = v[i][j];
    v[i][j] = ' ';

    bool found = dfs(v,word,i+1,j,count+1) || dfs(v,word,i-1,j,count+1) || dfs(v,word,i,j+1,count+1) || dfs(v,word,i,j-1,count+1);

    v[i][j] = temp;

    return found;
}


bool ans(vector< vector<char>>&v,string word){



    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            
            if(v[i][j] == word[0] && dfs(v,word,i,j,0))
                return true;
        }
    }
    return false;
}

int main(){

    vector< vector<char> >v = {{'A','B','C','E'},
                                {'S','F','C','S'},
                                {'A','D','E','E'}};

    string word = "ASA";
    
    cout<<ans(v,word);                           
    return 0;
}