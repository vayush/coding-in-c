#include<bits/stdc++.h>
using namespace std; 
  

int lcs( string X, string Y)  
{  

    int m = X.length();
    int n = Y.length();

    int L[m + 1][n + 1];  
    int i, j;  

    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {  
        if (i == 0 || j == 0)  
            L[i][j] = 0;  
      
        else if (X[i - 1] == Y[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  



    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {  
            cout<<L[i][j]<<" ";
        }  
        cout<<endl;
    }

    cout<<endl;

    return L[m][n];  
}  
  

  

int main()  
{  
    string s1 = "deleet";  
    string s2 = "leet";  
    
      
    cout<< lcs( s1,s2);  
      
    return 0;  
}