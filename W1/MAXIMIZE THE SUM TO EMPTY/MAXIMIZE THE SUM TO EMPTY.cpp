#include<iostream>
#include <algorithm>
using namespace std;
int maxsum(int a[],int n){
    int sum=0,i,j;

    for(i=n-1;i>=0;i--){
        if(a[i]>0){
            sum=sum+a[i];

            j=i-1;

            while(j>=0){

                if(a[i]-a[j]==1){

                    a[j]=a[i]=-1;
                    break;
                }
                j--;
            }
        }
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<maxsum(a,n)<<endl;
    }
return 0;
}