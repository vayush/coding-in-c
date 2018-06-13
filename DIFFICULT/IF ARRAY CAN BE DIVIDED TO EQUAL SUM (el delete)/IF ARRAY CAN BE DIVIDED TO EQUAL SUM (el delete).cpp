// Find if array can be divided into two subarrays of equal sum
// https://www.geeksforgeeks.org/find-if-array-can-be-divided-into-two-subarrays-of-equal-sum/
#include <iostream>
using namespace std;
bool equalSums(int a[],int n){
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
            return true;
        }
    }
    return false;
}


void equalSum(int a[],int n){
    int lsum=0,rsum=0;
    for (int i = 0; i < n; i++)
    {
        lsum = lsum+a[i];
    }
    int lc=0;

    for (int i = 0; i < n; i++)
    {
        lsum= lsum-a[i];
        if(lsum==rsum){
            lc++;
            cout<<"Index:"<<i<<endl;
        }
        if(lsum!=rsum){
            rsum = rsum+a[i];
        }
    }

    if(lc!=1){
        lc=0;
            int index = equalSums(a,n-1);
            if(index){
                lc++;
                cout<<"Index:"<<n-1<<endl;
            }
        }
    if(lc!=1){
        swap(a[0],a[n-1]);
        int index = equalSums(a,n-1);
            if(index){
                
                cout<<"Index:"<<"0"<<endl;
            }
    }
}

int main(){
    int a[] = {6,2,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    equalSum(a,n);
}
