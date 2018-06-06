#include<iostream>  
using namespace std;

int pairs(string str,int n){
    int m=0;
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            m++;
        }
    }
    return (m*(m-1))/2;
}
int main(){
    string str = "00100101";
    int n= str.length();
    cout<<pairs(str,n);
    return 0;
}