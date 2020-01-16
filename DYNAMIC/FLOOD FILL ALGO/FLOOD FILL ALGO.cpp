#include<bits/stdc++.h>
using namespace std;

void flood(vector<vector<char>> &mat, int x, int y) 
{ 
	int M = mat.size();
	int N = mat[0].size();
    
    if (x < 0 || x >= M || y < 0 || y >= N) 
        return; 
    if (mat[x][y] != '-') 
        return; 
  
    // Replace the color at (x, y) 
    mat[x][y] = '0'; 
  
    
    flood(mat, x+1, y); 
    flood(mat, x-1, y); 
    flood(mat, x, y+1); 
    flood(mat, x, y-1); 
} 



void solve(vector<vector<char>> &mat){

	int M = mat.size();
	int N = mat[0].size();

	for (int i=0; i<M; i++) 
      for (int j=0; j<N; j++) 
          if (mat[i][j] == 'O') 
             mat[i][j] = '-'; 
  
   
   for (int i=0; i<M; i++)   
      if (mat[i][0] == '-') 
      		flood(mat,i,0);
        
   for (int i=0; i<M; i++)  
      if (mat[i][N-1] == '-') 
      		flood(mat,i,N-1);
        
   for (int i=0; i<N; i++)   
      if (mat[0][i] == '-') 
      		flood(mat,0,i);
        
   for (int i=0; i<N; i++)  
      if (mat[M-1][i] == '-') 
      		flood(mat,M-1,i);
        

   for (int i=0; i<M; i++) 
      for (int j=0; j<N; j++) 
         if (mat[i][j] == '-') 
             mat[i][j] = 'X'; 

}



int main(){
	vector<vector<char>> s = {{'X', 'O', 'X', 'O', 'X', 'X'}, 
                     		  {'X', 'O', 'X', 'X', 'O', 'X'}, 
                     		  {'X', 'X', 'X', 'O', 'X', 'X'}, 
                              {'O', 'X', 'X', 'X', 'X', 'X'}, 
                              {'X', 'X', 'X', 'O', 'X', 'O'}, 
                              {'O', 'O', 'X', 'O', 'O', 'O'},}; 


    solve(s);

    for(int i=0;i<s.size();i++){
    	for(int j=0;j<s[0].size();j++){
    		cout<<s[i][j]<<" ";
    	}
    	cout<<endl;
    }

	return 0;
}