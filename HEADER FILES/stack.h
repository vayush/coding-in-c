#ifndef Stack_H
#include <iostream>
using namespace std;
#define stacks
#define MAX_SIZE 101
class stack
{
 private:
 	int top;
	int a[MAX_SIZE];	
 public:
	stack(){
		top=-1;
	}
	void push(int x){
		if(top==MAX_SIZE-1){
			cout<<" OVERFLOW \n";
			return ;
		}
		top++;
		a[top]=x;
	}
	void pop(){
		if(top==-1){
			cout<<" NO ELEMENT TO POP \n";
			return ;
		}
		top--;
	}
	int atTop(){
		return a[top];
	}
	void isEmpty(){
		if(top == -1){
			cout<<"EMPTY STACK \n";
			return;
		}
	}
	void print(){
		for(int i=0;i<=top;i++){
			cout<<a[i];
			cout<<"\n";
		}
	}
	
};
#endif