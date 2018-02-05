#include<iostream>
using namespace std;

int fact(int n){
    ///Base Case
    if(n==0)
        return 1;

    int chotaFact = fact(n-1);
    int badaFact = n*chotaFact;

    return badaFact;
}

int main(){
    cout<<fact(5)<<endl;
return 0;
}
