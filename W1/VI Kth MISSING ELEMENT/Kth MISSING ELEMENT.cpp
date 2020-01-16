#include <bits/stdc++.h>
using namespace std;
void kthmiss(int a[],int n,int k){

   unordered_set<int> s;
   for(int i=0;i<n;i++){
    s.insert(a[i]);
   }

   int max = *max_element(a,a+n);
   int min = *min_element(a,a+n);

   int count=0,res;

   for(int i=min+1;i<max;i++){
    if(s.find(i)==s.end()){
        count++;
    }
    if(count==k){
        res = i;
        break;
    }

   }
   cout<<res;

}
int main(){

    int arr[] = { 2, 10, 9, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    kthmiss(arr, n, 5);
    return 0;
}