#include<bits/stdc++.h>
using namespace std;

void next(int num[],int n){

    int mid = n/2;

    bool leftSmall = false;
    int i = mid-1;
    int j = (n % 2)? mid + 1 : mid;

    while(i>=0 && num[i] == num[j]){
        i--;
        j++;
    }

    if(i<0 || num[i] < num[j])
        leftSmall = true;


    while(i>=0){
        num[j] = num[i];
        j++;
        i--;
    }

    if(leftSmall == true){
        int carry = 1;
        i=mid-1;

        if(n%2 == 1){
            num[mid] = num[mid] + carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid+1;
        }
        else
            j=mid;


        while(i>=0){
            num[i] = num[i]+carry;
            carry = num[i]/10;
            num[i]%=10;
            num[j++] = num[i--];
        }
    }
}


        
int all9( int num[], int n ) 
{ 
    int i; 
    for( i = 0; i < n; ++i ) 
        if( num[i] != 9 ) 
            return 0; 
    return 1; 
}

void nextPalindrome(int num[],int n){
    if(all9(num,n)){
        cout<<"1";
        for(int i=1;i<n;i++)
            cout<<"0";
        cout<<"1";
    }

    else{
        next(num,n);

        for(int i=0;i<n;i++){
            cout<<num[i];
        }

    }
}


int main(){
    int num[] = {9,4,1,8,7,9,7,8,3,2,2};
    nextPalindrome(num,sizeof(num)/sizeof(num[0]));
    return 0;
}