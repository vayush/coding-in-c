#include<iostream>
using namespace std;


void printRange(int n){
    if(n==0)
        return;

    printRange(n-1);
    cout<<n<<" ";
}

int main(){
    printRange(12);
return 0;
}

