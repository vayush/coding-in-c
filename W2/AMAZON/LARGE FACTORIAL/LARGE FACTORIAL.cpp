// https://www.geeksforgeeks.org/factorial-large-number/
#include<iostream>
using namespace std;

int multiply(int res[],int size,int x){
    int carry =0;
    for (int i = 0; i < size; i++)
    {
        int prod = res[i]*x + carry;
        res[i]=prod%10;
        carry = prod/10;
    }

    while(carry){
        res[size] = carry%10;
        carry = carry/10;
        size++;
    }

    return size;
}

void factorial(int n){
    int res[1000];
    res[0]=1;
    int size=1;

    for(int i=2;i<=n;i++){
        size = multiply(res,size,i);
    }
    for(int i=size-1;i>=0;i--){
        cout<<res[i]<<"";
    }
}
int main(){
    factorial(45);
    return 0;
}