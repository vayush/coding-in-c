// Split an array into two equal Sum subarrays
// https://www.geeksforgeeks.org/split-array-two-equal-sum-subarrays/

#include <iostream>
using namespace std;

void equalSums(int a[],int n){
    int  lsum = 0;
    for (int i = 0; i < n; i++)
    {
        lsum += a[i];
    }
    int rsum = 0;
    int index=-1 ;
    for (int i = n-1; i >=0; i--)
    {
        rsum += a[i];

        lsum -= a[i];
        if(rsum == lsum){
            index = i;
            break;
        }
    }
    if(index == -1){
        cout<<index<<endl;
    }
    else{
        for (int i = 0; i < index; i++)
        {
            cout<<a[i]<<" ";
        }
            cout<<endl;
        for (int i = index; i < n; i++)
        {
            cout<<a[i]<<" ";
        }

    }
}

int main(){
    int a[] = {1,2,3,4,5,5};
    int n = sizeof(a)/sizeof(a[0]);
    equalSums(a,n);
    return 0;
}