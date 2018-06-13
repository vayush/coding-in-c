#include <iostream>
using namespace std;
int isPalindrome(char str[]){
    if(strlen(str)==1){
        return true;
    }

    int l=0;
    int r=strlen(str)-1;
    while(l<=r){
        if(str[l] != str[r]){
            
            return 0;
        }
        else{
            l++;
            r--;
        }
    }
    return 1;
}
int minAppend(char s[]){
    if(isPalindrome(s)){
        return 0;
    }

    s++;
    return 1+minAppend(s);
}
int main(){
    char str[]= "abedec";
    cout<<minAppend(str);
    
}