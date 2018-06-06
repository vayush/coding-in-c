#include<iostream>
using namespace std;
int kthmiss(int a[],int size,int k){

    int difference = 0, 
        ans = 0, count = k;
    bool flag = 0;
    for(int i = 0 ; i < size - 1; i++)
    {   
        difference = 0;
        
        if ((a[i+1]-a[i])!=1) 
        {
            difference = 
                (a[i + 1] - a[i]) - 1;
            if (difference >= count)
                {
                    ans = a[i] + count;
                    flag = 1;
                    break;
                }
            else
                count =count-difference;
        }
    }
     
    if(flag)
        return ans;
    else
        return  -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,k;
        cin>>l;
        cin>>k;
        int a[l];
        for(int i=0;i<l;i++){
            cin>>a[i];
        }
        cout<<kthmiss(a,l,k)<<"\n";
    }
    return 0;
}