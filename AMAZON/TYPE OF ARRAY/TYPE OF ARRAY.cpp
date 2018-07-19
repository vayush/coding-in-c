#include<iostream>
using namespace std;
void findType(int arr[],int n){

    int max=INT_MIN;
    for(int i=0;i<n;i++)
        if(arr[i]>max)
        max=arr[i];
    
    int countasc=0,countdesc=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1])
        countasc++;
        if(arr[i]>arr[i+1])
        countdesc++;
    }

    if(countasc==(n-1)){
        cout<<max<<" "<<"ASCENDING"<<endl;
        return;
    }

    if(countdesc==(n-1)){
        cout<<max<<" "<<"DESCENDING"<<endl;
        return;
    }

    if(countasc==1){
        cout<<max<<" "<<"DESCENDING ROTATED"<<endl;
        return;
    }

    if(countdesc==1){
        cout<<max<<" "<<"ASCENDING ROTATED"<<endl;
        return;
    }
    
}



int main()
 {
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++){
            cin>>a[i]; 
         }
        findType(a,n);
     }
    return 0;
}