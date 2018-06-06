// https://practice.geeksforgeeks.org/problems/how-many-xs/0
#include <iostream>
using namespace std;

int digitOccurances(int x,int l,int u){

    int sum=0;
    for(int i=l+1;i<u;i++){
        int temp = i;
        while(temp!=0){
            if(temp%10 == x)
                sum++;

            temp/=10;
        }
    }
    return sum;
}
int main(){

    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;
        int l,u;
        cin>>l>>u;  
        cout<<digitOccurances(x,l,u)<<endl;
    }

    return 0;
}