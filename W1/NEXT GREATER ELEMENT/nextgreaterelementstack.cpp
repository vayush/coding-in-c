#include <iostream>
#include "stack.h"
using namespace std;
void nextGreater(int a[10],int n){
	stack s;
	int next ,element;
	s.push(a[0]);
	for(int i=1;i<n;i++){
		next = a[i];
		if(s.isEmpty() == 0){
			element = s.pop();
			while(next > element){
				cout<<element<<" "<<next<<"\n";
				if(s.isEmpty() == 1)
					break;
				element = s.pop();
			}
			if(element > next)
				s.push(element);
		}
		s.push(next);
	}
	while(s.isEmpty() == 0){
		element= s.pop();
		next = -1;
		cout<<element<<" "<<next<<"\n";
	}
}
int main(){
	int n;
	int arr[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	nextGreater(arr,n);
	return 0;
}
