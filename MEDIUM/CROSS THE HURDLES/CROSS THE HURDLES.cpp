#include <iostream>
using namespace std;

void energyStates(int a[],int b[],int n){

    int energy = a[0];
    int next,count=0;

    for (int i = 0; i < n; i++)
    {   
        if(i==n-1){
            next =0;
        }
        else{
            next = a[i+1];
        }

        if(energy>=b[i]){
        energy = energy-b[i];
        energy = energy + (i+1);
        energy = energy + next;
        count++;
        }
        else if(energy<b[i]){
            cout<<"Game Over "<<endl;
            break;
        }
    }
    if(count==n){
        cout<<"You Win!"<<" "<<energy<<endl;
    }
}

int main(){

    // int a[]={1,1,1};
    // int b[]={0,2,4};
    // int n = sizeof(a)/sizeof(a[0]);
    // energyStates(a,b,n);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        energyStates(a,b,n);

    }
    return 0;
}