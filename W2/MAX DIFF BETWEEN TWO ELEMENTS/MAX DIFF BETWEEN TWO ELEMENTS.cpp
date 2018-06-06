// https://www.youtube.com/watch?v=SO0bwMziLlU&index=7&list=PLqM7alHXFySHB3G_bQEXWx0CLY2ItWzay

#include<iostream>
#include<algorithm>
using namespace std;
int maxDiff(int a[],int n){

  int maxdiff=a[1]-a[0];
  int minel=a[0];
  for(int i=1;i<n;i++){

    if((a[i]-minel)>maxdiff){
      maxdiff=a[i]-minel;
    }
    if(a[i]<minel){
      minel = a[i];
    }
  }
  return maxdiff;
}
int main(){
  int arr[] = {1, 2, 90, 10, 110};
  int n = sizeof(arr) / sizeof(arr[0]);
   
  cout << "Maximum difference is " << maxDiff(arr, n);
 
  return 0;
}