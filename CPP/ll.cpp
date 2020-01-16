#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* Delete(int pos,Node* head){
    Node* t1 = head;
    if(pos==1){
        head = t1->next;
        free(t1);
        return head;
    }

    for(int i =0;i<pos-2;i++){
        t1 = t1->next;
    }

    Node* t2;
    t2 = t1->next;
    t1->next = t2->next;
    free(t2);
    return head;
}

Node* insert(int data,int pos,Node* head){
    Node* x = new Node();
    x->next=NULL;
    x->data = data;
    if(pos==1){
        x->next = head;
        head=x;
        return head;
    }

    Node* t2 = head;
    for(int i=0;i<pos-2;i++){
        t2=t2->next;
    }
    x->next = t2->next;
    t2->next = x;

    return head;
}


void print(Node* m){
    while(m){
        cout<<m->data<<" ";
        m = m->next;
    }
    cout<<endl;
}



int main(){
    Node* head=NULL;
    head = insert(1,1,head);
    head = insert(2,2,head);
    head = insert(3,3,head);
    head = insert(4,4,head);
    head = insert(5,5,head);
    head = insert(6,6,head);
    head = insert(7,7,head);
    head = insert(8,8,head);
    head = insert(9,9,head);
    head = insert(10,10,head);

    print(head);

    head = Delete(4,head);
    print(head);
    return 0;
}