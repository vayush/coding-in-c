#include <bits/stdc++.h> 
using namespace std; 
  
int findPlatform(int arr[], int dep[], int n) 
{ 
    
    map<int, char> order; 
    for (int i = 0; i < n; i++) { 
        order[arr[i]] = 'a';
        order[dep[i]] = 'd';
    } 
  
    int result = 0; 
    int plat_needed = 0; 
  
    
    for (auto it = order.begin(); it != order.end(); it++) { 

        if (it->second == 'a') 
            plat_needed++; 
        else
            plat_needed--; 
  
        if (plat_needed>result) 
            result = plat_needed; 
    } 


    for(auto it = order.begin();it!=order.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    


    return result; 
} 
  
int main() 
{ 
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 }; 
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout<< findPlatform(arr, dep, n); 
    return 0; 
}