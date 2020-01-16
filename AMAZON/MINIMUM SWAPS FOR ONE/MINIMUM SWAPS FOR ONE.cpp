// https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-group-all-1s-together/0

#include <iostream>
using namespace std;
int minimumSwaps(int a[],int n){
    int onecount=0;
    for (int i = 0; i < n; i++)
    {
       if(a[i]==1){
        onecount++;
       }
    }

    if(onecount==0){
        return -1;
    }
    else{
    int x = onecount;//subrray length
    int maxones;     
    int count_ones = 0;
    for(int i=0;i<x;i++){
        if(a[i]==1){
            count_ones++;
        }
    }
    maxones = count_ones;

    for(int i=1;i<=n-x;i++){
        if(a[i-1]==1){
            count_ones--;
        }
        if(a[i+x-1]==1){
            count_ones++;
        }
        if(count_ones>maxones){
            maxones = count_ones;
        }
    }
    int zeroes = x - maxones;

    return zeroes;
    }
}

int main(){
    int a[] = {0,0,0,1,1,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<minimumSwaps(a,n)<<endl;
    
}
