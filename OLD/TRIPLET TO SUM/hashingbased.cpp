#include<bits/stdc++.h>
using namespace std;

void findtriplets(int a[],int n,int sum){

    for (int i = 0; i < n-2; i++)
    {
        unordered_set<int>s;
        int curr_sum = sum - a[i];

        for(int j = i+1 ; j<n;j++){

            if(s.find(curr_sum - a[j])!= s.end()){
                cout<<"Yes";
                return ;
            }
            s.insert(a[j]);
            for(auto x:s){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }

    cout<<"NO";

}

int main(){
    int a[] = {1,4,45,6,10,8};
    int n = sizeof(a)/sizeof(a[0]);
    findtriplets(a,n,22);
    return 0;
}