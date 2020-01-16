#include <bits/stdc++.h> 
using namespace std; 
  

struct Node 
{ 
    int data; 
    struct Node* left, *right; 
}; 




Node* newNode(int data) 
{ 
    Node* node = new Node; 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 
  


bool rootToleaf(Node* root,int sum){

    if(root==NULL)
        return false;
    if(root->left == NULL && root->right == NULL){
        if(root->data == sum)
            return true;
        else
            return false;
    }


    if(rootToleaf(root->left,sum-root->data))
        return true;
    if(rootToleaf(root->right,sum-root->data))
        return true;

    return false;

}



int main() 
{ 
    
  
    Node *root = newNode(10); 
    root->left     = newNode(16); 
    root->right     = newNode(5); 
   
    root->left->right= newNode(-3); 
    root->right->right = newNode(11); 
    root->right->left = newNode(6); 


    cout<<rootToleaf(root,26);

    return 0; 
}