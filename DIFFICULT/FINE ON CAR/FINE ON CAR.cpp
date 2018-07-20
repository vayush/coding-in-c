#include<bits/stdc++.h>
using namespace std;

bool oddeve(int number){
    if(number % 2 == 0)
        return 1;

    return 0;
}

int findFine(int car[],int fine[],int n,int date){
    int fines=0;
    for(int i=0;i<n;i++){
        int dig = car[i]%10 ;
        if(oddeve(dig) != oddeve(date)){
            fines = fines+fine[i];
        }
    }
    return fines;
}


int main(){
    // int car[] = {2222,2223,2224};
    // int n = sizeof(car)/sizeof(car[0]);
    // int fine[] = {200,300,400};
    // cout<<findFine(car,fine,n,8)<<endl;
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int car[n],fine[n];
        for (int i = 0; i < n; i++)
        {
            cin>>car[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>fine[i];
        }
        cout<<findFine(car,fine,n,d)<<endl;
    }


    return 0;
}