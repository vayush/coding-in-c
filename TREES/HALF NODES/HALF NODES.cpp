#include <bits/stdc++.h> 
using namespace std; 
  

struct Node 
{ 
    int data; 
    struct Node* left, *right; 
}; 

int gethalfCount(Node* root){

    if(root == NULL)
        return 0;

    int c=0;
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        if(temp->left == NULL && temp->right != NULL){
            c++;
        }

        if(temp->right == NULL && temp->left != NULL)
            c++;

        if(temp->right != NULL)
            q.push(temp->right);

        if(temp->left != NULL)
            q.push(temp->left);
    }

    return c;
}



struct Node* newNode(int data) 
{ 
    struct Node* node = new Node; 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 
  

int main(void) 
{ 
    
  
    Node *root = newNode(2); 
    root->left     = newNode(7); 
    root->right     = newNode(5); 
    root->left->right = newNode(6); 
    root->left->right->left = newNode(1); 
    root->left->right->right = newNode(11); 
    root->right->right = newNode(9); 
    root->right->right->left = newNode(4); 
  
    cout << gethalfCount(root);
  
    return 0; 
}