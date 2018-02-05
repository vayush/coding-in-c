#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }

    char slist[][10] = {"zero","one","two","three",
    "four","five","six","seven","eight","nine"};

    int last_digit = n%10;

    print(n/10);
    cout<<slist[last_digit]<<" ";
}

int main(){
    int n;
    cin>>n;
    print(n);

return 0;
}
