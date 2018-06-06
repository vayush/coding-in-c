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
	int pop(){
		if(top==-1){
			cout<<" NO ELEMENT TO POP \n";
			return -1;
		}
		else 
			return a[top];
		top--;
	}
	int atTop(){
		return a[top];
	}
	bool isEmpty(){
		if(top == -1){
			return true;
		}
		else
			return false;
	}
	void print(){
		for(int i=0;i<=top;i++){
			cout<<a[i];
			cout<<"\n";
		}
	}
	
};
#endif