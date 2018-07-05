#include<bits/stdc++.h>
using namespace std;

void nge(int a[],int n){

    stack<int> s;
    s.push(a[0]);
    int nextgreat;
    for (int i = 1; i < n; i++)
    {
        while(!s.empty() && s.top()<a[i]){
            int element = s.top();
            s.pop();
            cout<<element<<"-->"<<a[i]<<endl;
        }
        s.push(a[i]);
    }
    while(!s.empty()){
        int top = s.top();
        cout<<top<<"-->"<<"-1"<<endl;
        s.pop();
    }
}
int main(){
    int a[] = {5,3,2,10,6,8,1,4,12,7,4};
    int n = sizeof(a)/sizeof(a[0]);
    nge(a,n);
    return 0;
}