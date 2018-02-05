#include<iostream>
using namespace std;

bool isSorted(int a[],int n){
    if(n==1||n==0){
        return true;
    }
    int chotaArray[100];
    for(int i=1;i<=n-1;i++){
        chotaArray[i-1] = a[i];
    }
    bool isSmallSorted = isSorted(chotaArray,n-1);

    if(a[0]<a[1]&&isSmallSorted){
        return true;
    }
    else{
        return false;
    }

}


int main(){
    int a[] = {1,3,5,7,8};
    int n=5;
    if(isSorted(a,n)){
        cout<<"Sorted hai !"<<endl;
    }
    else{
        cout<<"Unsorted Array !" <<endl;
    }
return 0;
}

