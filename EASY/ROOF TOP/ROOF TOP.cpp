// https://practice.geeksforgeeks.org/problems/roof-top/0
// Roof Top

#include <iostream>
using namespace std;

void fn(int arr[],int n){
  int c=0;int ans=0;
       for(int i=0;i<n-1;i++)
       {
         if(arr[i]<arr[i+1])
         {
          c++;
          ans=max(ans,c);
         }
         else 
         {
            ans=max(ans,c);
            c=0;
         }
       }       
      cout<<ans<<endl;
}

int main()
{
  // int a[] = {1,2,2,3,2};
  // int n = sizeof(a)/sizeof(a[0]);
  // fn(a,n);

  int T;
  cin>>T;
  while(T--)
   {
      int n;

      cin>>n;

      int arr[n];

      for(int i=0;i<n;i++)
      cin>>arr[i];

    fn(arr,n);
    }
  return 0;
}