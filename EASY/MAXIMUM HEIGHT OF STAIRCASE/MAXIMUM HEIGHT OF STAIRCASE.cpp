// https://practice.geeksforgeeks.org/problems/maximum-height-of-the-staircase/0
// Maximum height of the staircase

#include <iostream>
using namespace std;
int maxHeight(int n){
    int sum=0;
    int count=0;
    int csum=0;
        for (int i = 1; i < n/2; i++)
        {
            if(sum<=n && csum<=n ){
                sum = sum+i;
                csum=sum+(i+1);
                count++;
            }
            else{
                break;
            }
        }
        return count;
}
int main(){
    cout<<maxHeight(1000000000);

    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     cout<<maxHeight(n)<<endl;
    // }
    // return 0;
}