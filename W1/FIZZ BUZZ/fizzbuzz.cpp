#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=50;
	int t=1,f=1;
	for(int i=1;i<=n;i++){
		if(t!=3 && f!=5){
			cout<<i;
		}
		if(t==3){
			cout<<"fizz ";
			t=0;
		}
		if(f==5){
			cout<<"buzz";
			f=0;
		}
		cout<<endl;
		t++;
		f++;
	}
return 0;
}