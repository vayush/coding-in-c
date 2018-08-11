#include<bits/stdc++.h>
using namespace std;
void findTriple(int a[],int n){
    sort(a,a+n);
    int count=0;
    
    for(int i=0;i<n;i++){
    	int l=0,r=n-1;
    	while(l<r){
    		if(a[l]+a[r] == a[i] && l!=i && r!=i){
    			count++;
    			l++;
    			r--;

    		}
    		else if(a[l]+a[r] < a[i] && l!=i && r!=i)
    			l++;
    		else 
    			r--;
    	}
    }
    if(count>0)
    	cout<<count<<endl;
    else
    	cout<<-1<<endl;

}
int main(){
    // int a[] = {1,3,2,5};
    // int n = sizeof(a)/sizeof(a[0]);
    // findTriple(a,n);
    // int t;
    // cin>>t;
    // while(t--){
    // 	int n;
    // 	cin>>n;
    // 	int a[n];
    // 	for(int i=0;i<n;i++){
    // 	cin>>a[i];
    // 	}
    // 	findTriple(a,n);
    // }
    // return 0;
}