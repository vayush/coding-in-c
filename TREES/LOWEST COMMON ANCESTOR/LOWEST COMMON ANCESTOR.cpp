#include <bits/stdc++.h> 
using namespace std; 


struct Node 
{ 
    int data; 
    struct Node* left, *right; 
}; 

struct Node* newNode(int data) 
{ 
    struct Node* node = new Node; 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 
  

int height(Node* root){
  if(root == NULL)
    return 0;
  
  return(1 + max ( height(root->left),height(root->right) ) );
}
    
Node* Lca(Node* root,int p, int q){

    if(root==NULL)
        return root;
    if(root->data==p || root->data == q)
        return root;

    Node* left = Lca(root->left,p,q);
    Node* right = Lca(root->right,p,q);
    if(left!=NULL && right!=NULL)
        return root;
    else
        return (left?left:right);
}

int main() 
{ 

    Node *root = newNode(20); 
    root->left = newNode(8); 
    root->right = newNode(22); 
    root->left->left = newNode(4); 
    root->left->right = newNode(12); 
    root->left->right->left = newNode(10); 
    root->left->right->right = newNode(14); 

    Node* x = Lca(root,10,22);
    cout<<x->data;
    return 0; 
} 