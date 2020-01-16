#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>& candidates, int target, int idx, vector<vector<int>> & res, vector<int> & path) {
    
    if (target == 0) {
        res.push_back(path);
        return;
    }
        
    for (int i = idx; i < candidates.size(); i++) {
        if (candidates[i] > target) 
            return;
        
        if(i>idx && candidates[i] == candidates[i-1]) //for duplicates
            continue;

        path.push_back(candidates[i]);
        dfs(candidates, target - candidates[i], i+1, res, path);
        path.pop_back();
    }
}

void combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> res;
    vector<int> path;
    sort(candidates.begin(), candidates.end());
    dfs(candidates, target, 0, res, path);
    

    

    for (int i = 0; i < res.size(); i++) { 
        for (int j = 0; j < res[i].size(); j++) 
            cout << res[i][j] << " "; 
        cout << endl; 
    }
}



int main(){
    vector<int>v = {10,1,2,7,6,1,5};

    combinationSum(v,8);
    return 0;
}