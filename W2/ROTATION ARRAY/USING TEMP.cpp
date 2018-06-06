// https://www.geeksforgeeks.org/array-rotation/
#include<iostream>
using namespace std;

void splitArr(int a[],int n,int position){
    int temp[position];
    for(int i=0;i<position;i++){
        temp[i]=a[i];
    }
    for(int i=position;i<n;i++){
        a[i-position]=a[i];
    }
    int k=0;
    for(int i=n-position;i<n;i++){
        a[i]=temp[k];
        k++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[] = { 12, 10, 5, 6, 52, 36,56,43};
    int n = sizeof(arr) / sizeof(arr[0]);
    int position = 2;

    splitArr(arr, n, position);
}