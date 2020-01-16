#include<bits/stdc++.h> 
using namespace std; 
  
 
int mins(int x, int y, int z) 
{ 
    return min(min(x, y), z); 
} 
  
int editDistDP(string str1, string str2, int m, int n) 
{ 
     
    int dp[m+1][n+1]; 
  
    memset(dp,0,sizeof(dp));

    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
             
            if (i==0) 
                dp[i][j] = j;   
  
            
            else if (j==0) 
                dp[i][j] = i; 
  
            
            else if (str1[i-1] == str2[j-1]) 
                dp[i][j] = dp[i-1][j-1]; 

            else
                dp[i][j] = 1 + mins(dp[i][j-1],  
                                   dp[i-1][j],  
                                   dp[i-1][j-1]); 
        } 
    } 



    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<< " ";
        }
        cout<<endl;
    }
    

  
    return dp[m][n]; 
} 
  

int main() 
{ 
    string str1 = "horse"; 
    string str2 = "ros"; 
  
    cout << editDistDP(str1, str2, str1.length(), str2.length()); 


    // int t;
    // cin>>t;
    // while(t--){
    //     int n1,n2;
    //     cin>>n1>>n2;
    //     cin.ignore();

    //     string s1,s2;

    //     getline(cin,s1); 
    //     getline(cin,s2);        
    //     cout<<editDistDP(s1,s2,s1.length(),s2.length());
    // }
  
    return 0; 
} 