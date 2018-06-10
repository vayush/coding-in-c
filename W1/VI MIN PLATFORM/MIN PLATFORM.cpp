#include<iostream>
using namespace std;
int platformCount(int a[],int d[],int n){

    int platform=1;
    int maxplatform=1;
    int i=1;
    int j=0;

    while(i<n && j<n){
        
        if(a[i]>d[j]){
            j++;
            platform--;
        }
        else if(a[i]<=d[j]){
            i++;
            platform++;

            if(platform>maxplatform){
                maxplatform = platform;
            }
        }
    }
    return maxplatform;
}

int main(){
    int a[] = {900,940,950,1100,1500,1800};
    int d[] = {910,1200,1120,1130,1900,2000};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<platformCount(a,d,n);

    return 0;
}
