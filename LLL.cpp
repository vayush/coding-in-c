#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* insert(Node* head,int x){

	Node* a = new Node();
	a->data = x;
	a->next = NULL; 

	if(head!=NULL){
		// a->data=n;
		a->next=head;
	}
	head=a;
	return head;

}

void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

void printRec(Node* head){
	if(head==NULL)
		return;
	cout<<head->data<<" ";
	printRec(head->next);
}


void printRev(Node* head){
	if(head==NULL)
		return;

	printRev(head->next);
	cout<<head->data<<" ";

}


Node* rreverse(Node* head){

	if(head == NULL || head->next == NULL)
		return head;

	Node* temp = rreverse(head->next);
	head->next->next = head;
	head->next = NULL;
	return temp;
}
    
int main(){
	
	
	Node* temp=NULL;

	temp=insert(temp,1);
	temp=insert(temp,2);
	temp=insert(temp,3);
	temp=insert(temp,4);

	temp = rreverse(temp);
	printRec(temp);
	// printRev(temp);

	// int t;
	// cin>>t;
	// while(t--){
	// 	int n;
	// 	cin>>n;
	// 	temp=insert(temp,n);
	// 	print(temp);
	// }

	
	return 0;
}