#include<iostream>
using namespace std;
int platforms(int arr[],int dep[],int n){

    int platforms=1,result=1;

    int i=1,j=0;
    while(i<n && j<n){

        if(arr[i]<dep[j]){
            platforms++;
            i++;

            if(platforms>result){
                result = platforms;
            }
        }
        else{
            platforms--;
            j++;
        } 

    }

    return result;
}
int main(){
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<platforms(arr,dep,n);
return 0;
}