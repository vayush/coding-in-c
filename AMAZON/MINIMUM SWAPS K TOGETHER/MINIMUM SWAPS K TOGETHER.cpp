// https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together/0

#include <iostream>
using namespace std;
void minSwap(int a[],int n,int k){
	int count=0;
    for (int i = 0; i < n; i++)
    {
    	if(a[i]<=k){
    		count++;
    	}
    }
    int max=0;
    int countel=0;
    for(int i=0;i<count;i++){
    	if(a[i]<=k){
    		countel++;
    	}
    }
    max=countel;
    for(int i=1;i<=n-count;i++){
    	if(a[i-1]<=k){
    		countel--;
    	}
    	if(a[i+count-1]<=k){
    		countel++;
    	}

    	if(countel>max){
    		max= countel;
    	}
    }
    int swap = count-max;
    cout<<swap<<endl;

}
int main(){
    int a[] = {263,349,318,277,282,301,250,104,164,278,442,400,130,271,305,52,472,346,24,185};
    int n = sizeof(a)/sizeof(a[0]);
    minSwap(a,n,210);
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin>>a[i];
    //     }
    //     int k;
    //     cin>>k;
    //     minSwap(a,n,k);
    // }


    return 0;
}