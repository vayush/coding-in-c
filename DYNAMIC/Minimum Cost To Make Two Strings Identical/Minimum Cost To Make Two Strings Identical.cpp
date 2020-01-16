// Minimum Cost To Make Two Strings Identical

#include<bits/stdc++.h> 
using namespace std; 

int lcs(string X, string Y, int m, int n) 
{ 
    int L[m+1][n+1]; 
  
    
    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
            if (i == 0 || j == 0) 
                L[i][j] = 0; 
  
            else if (X[i-1] == Y[j-1]) 
                L[i][j] = L[i-1][j-1] + 1; 
  
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]); 
        } 
    } 
  
   
    return L[m][n]; 
} 
  

int findMinCost(string &X, string &Y, int costX, int costY) 
{ 
    
    int m = X.length(), n = Y.length();
    int len_LCS = lcs(X, Y, m, n); 
  
   
    return costX * (m - len_LCS) + 
           costY * (n - len_LCS); 
} 
  

int main() 
{ 
    string x = "ef"; 
    string y = "gh"; 
    cout <<findMinCost(x, y, 10, 20); 
    return 0; 
}