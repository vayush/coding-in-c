// https://www.geeksforgeeks.org/array-rotation/
#include <iostream>
using namespace std;
void leftrotatebyOne(int arr[],int n){
    int temp=arr[0];
    int i;
    for(i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[i-1]=temp;
}

void leftRotate(int arr[],int d,int n){
    for(int i=0;i<d;i++){
        leftrotatebyOne(arr,n);
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
   int n = sizeof(arr) / sizeof(arr[0]);

   leftRotate(arr, 2, n);
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}