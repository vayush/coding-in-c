#include <iostream>
using namespace std;
void printarray(int a[],int s){
	for(int i=0;i<s;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void cyclicrotate(int a[],int s){
	int temp;
	for(int i=0;i<(s-1);i++){
		temp=a[s-1];
		a[s-1]=a[i];
		a[i]=temp;
	}
}
int main(){
	int a[10],s,i,crot;
	cin>>s;
	for(i=0;i<s;i++){
		cin>>a[i];
	}
	cout<<"HOW MANY TIMES TO ROTATE \n ";
	cin>>crot;
	cout<<endl;
	for(i=0;i<crot;i++){
		cyclicrotate(a,s);
	}
	printarray(a,s);
	return 0;
}