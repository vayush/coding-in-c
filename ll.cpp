#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node *head,*tail;
void insertAtBeg(int item){
	Node *a;
	a=new Node();
	a->data = item;
	a->next = NULL;
	if(head == NULL){
		head = a;
		tail = a;
		cout<<"FIRST NODE INSERTED  \n";
	}
	else{
		a->next = head;
		head = a;
		cout<<"NODE INSERTED \n";
	}
}
void display(){
	Node *a;
	if(head==NULL){
		cout<<"NOTHING TO DISPLAY : ";
	}
	else{
		a = head;
		while(a!= NULL){
			cout<<"-->"<<a->data;
			a = a->next;
	}
		cout<<"\n";
	}
}
int main(){
	int item,n,i;
	head = NULL;
	tail = NULL;
	cout<<"ENTER HOW MANY NODES TO INSERT : ";
	cin>>n;
	cout<<"\n";
	for(i=0;i<n;i++){
		cout<<"ENTER ITEM :";
		cin>>item;
		insertAtBeg(item);
		display();
		}
		return 0;
}