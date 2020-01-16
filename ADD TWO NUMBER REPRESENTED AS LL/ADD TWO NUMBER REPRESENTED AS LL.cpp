#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* insert(int data,int pos,Node* head){
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if(pos==1){
		temp->next=head;
		head = temp;
		return head;
	}
	Node* t2 = head;
	for(int i=0;i<pos-2;i++){
		t2 = t2->next;
	}
	temp->next = t2->next;
	t2->next = temp;
	return head;

}

void print(Node* head){
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
}

Node* Delete(int pos,Node* head){
	Node* t1 = head;
	if(pos==1){
		head = t1->next;
		free(t1);
		return head;
	}
	for(int i=0;i<pos-2;i++){
		t1 = t1->next;
	}
	Node* t2;
	t2 = t1->next;
	t1->next = t2->next;
	free(t2);
	return head;
}

Node* reverse(Node* head){
	Node* current = head;
	Node* next = NULL;
	Node* prev = NULL;
	while(current!=NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}

Node* add(Node* h1, Node* h2,Node* h3)
{
  h1 = reverse(h1);
  h2 = reverse(h2);
  h3 = reverse(h3);
  
  Node* resList = NULL;
  int sum = 0;
  int carry = 0;
  
  while(h1 != NULL || h2 != NULL || h3!=NULL)
  {
    sum = carry;

    if(h1 != NULL)
    {
      sum += h1->data;
      h1 = h1->next;
    }
    
    if(h2 != NULL)
    {
      sum += h2->data;
      h2 = h2->next;
    }

    if(h3 != NULL)
    {
      sum += h3->data;
      h3 = h3->next;
    }



    carry = sum / 10; // CARRY FOR NEXT POSITION
    sum = sum % 10;
    

    resList = insert(sum,1,resList);
  }
  

  if(carry != 0)
    resList = insert(carry,1,resList);
  
  return resList;
}


int main(){
	Node* head=NULL;
	Node* head1=NULL;
	Node* head2=NULL;
	Node* res=NULL;

	head = insert(5,1,head);
	head = insert(0,2,head);
	head = insert(0,3,head);
	
	head1 = insert(3,1,head1);
	head1 = insert(0,2,head1);
	head1 = insert(0,3,head1);

	head2 = insert(2,1,head2);
	head2 = insert(0,2,head2);
	head2 = insert(0,3,head2);
	// head = insert(8,1,head);
	// head = Delete(3,head);
	// print(head);
	// cout<<endl<<"  ";
	// print(head1);
	// cout<<endl<<"  ";
	// print(head2);
	// cout<<endl;

	res=add(head,head1,head2);
	print(res);

	return 0;
}