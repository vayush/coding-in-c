#include<iostream>
using namespace std;

int fib(int n){
    ///Base Case
    if(n==0||n==1){
        return n;
    }
    ///Assume this happens
    int f1 = fib(n-1);
    int f2 = fib(n-2);
    ///Caculate fib(n)
    return f1+f2;
}

int main(){
    cout<<fib(6)<<endl;
return 0;
}
