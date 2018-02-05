#include<iostream>
using namespace std;

///This takes time proportional to N
int power(int x,int n){
    if(n==0)
        return 1;

    return x*power(x,n-1);
}
///Fast Power proportional to LogN
int fastPower(int x,int n){

    if(n==0){
        return 1;
    }
    if(n&1){
        return x*fastPower(x,n-1);
    }
    else{
        int x_sq = fastPower(x,n/2);
        return x_sq*x_sq;
    }

}
int main(){
    cout<<power(3,5)<<endl;
    cout<<fastPower(3,5)<<endl;

return 0;
}
