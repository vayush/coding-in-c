#include <iostream>
using namespace std;

void printRev(int arr[], int si, int ei){
    //when no elements to print
    if (si > ei) return;

    cout << arr[ei] << " ";
    printRev(arr, si, ei - 1);
}

int main(){
    int n;
    cin >> n;
    int arr[10];
    for(int i= 0 ;i<n;i++){
    	cin>>arr[i];
    }
    printRev(arr, 0, n - 1);  
}