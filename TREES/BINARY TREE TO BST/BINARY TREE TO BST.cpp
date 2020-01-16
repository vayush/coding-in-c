#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* newNode(int data) 
{ 
    Node* node = new Node; 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
}

void inorder(Node* root,vector<int>&v){
	
	if(root==NULL)
		return;

	inorder(root->left,v);
	v.push_back(root->data);
	// cout<<root->data;
	inorder(root->right,v);


}

void inOrder(Node* root,vector<int>v) 
{ 
    stack<Node *> s; 
    int c=0;
    Node* cur = root;
    while(1){
    	while(cur!=NULL){
    		s.push(cur);
    		cur = cur->left;  		
    	}
    	if(s.empty())
    		break;

    	cur = s.top();
    	s.pop();
    	cur->data = v[c++];
    	cur = cur->right;
    }
}




void btTobst(Node* root){
	vector<int> a;

	inorder(root,a);

	sort(a.begin(),a.end());

	inOrder(root,a);
}


void print(Node *root) 
{ 
    // Base Case 
    if (root == NULL)  return; 
  
    // Create an empty queue for level order tarversal 
    queue<Node *> q; 
  
    // Enqueue Root and initialize height 
    q.push(root); 
  
    while (q.empty() == false) 
    { 
        // Print front of queue and remove it from queue 
        Node *node = q.front(); 
        cout << node->data << " "; 
        q.pop(); 
  
        /* Enqueue left child */
        if (node->left != NULL) 
            q.push(node->left); 
  
        /*Enqueue right child */
        if (node->right != NULL) 
            q.push(node->right); 
    } 
}


int main(){
	Node* root = newNode(0);
	root->left = newNode(1);	
	root->right = newNode(2);
	root->left->left = newNode(3);
	root->left->right = newNode(4);
	root->left->left->right = newNode(6);
	root->left->left->right->right = newNode(8);
	root->right->left = newNode(5);
	root->right->left->right = newNode(7);

	// inorder(root);

	// cout<<size(root);
	print(root);
	cout<<endl;
	btTobst(root);
	cout<<endl;
	print(root);

	return 0;
}