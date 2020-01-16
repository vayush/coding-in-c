#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node *head;
void insertatBeg(int item){
	Node *a;
	a=new Node();
	a->data = item;
	a->next = NULL;
	if(head == NULL){
		head = a;
		
	}
	else{
		a->next = head;
		head = a;
			}
}
void Print(){
	Node *a;
	a = head;
		while(a!= NULL){
			cout<<"-->"<<a->data;
			a = a->next;
	
		cout<<"\n";
	}
}