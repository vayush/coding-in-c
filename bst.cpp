#include<bits/stdc++.h>
using namespace std;

struct Bst{
	int data;
	Bst* left=NULL;
	Bst* right=NULL;
};

Bst* getNew(int data){
	Bst* x = new Bst();
	x->data = data;
	x->left = x->right = NULL;
	return x;
}

void inorder(Bst* root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void diag(Bst* root,map<int,vector<int>>&m,int d){
	if(root==NULL)
		return;

	m[d].push_back(root->data);

	diag(root->left,m,d+1);
	diag(root->right,m,d);
}

void getdiag(Bst* root){
	map<int,vector<int>>m;
	diag(root,m,0);

	for(auto it=m.begin();it!=m.end();it++){
		for(int i=0;i<it->second.size();i++){
			cout<<it->second[i]<<" ";
		}
		cout<<endl;
	}

}


Bst* insert(int data,Bst* root){
	if(root==NULL){
		root = getNew(data);
		return root;
	}
	if(data<=root->data){
		root->left = insert(data,root->left);
	}
	else{
		root->right = insert(data,root->right);
	}
	return root;
}

void levelOrder(Bst* root){
	if(root==NULL)
		return ;

	// int count=0;

	queue<Bst*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Bst* current = q.front();
		q.pop();

		if(current!=NULL){
			if(current->left!=NULL){
				q.push(current->left);
			}
			if(current->right!=NULL){
				q.push(current->right);
			}
			// if(count==0)
			cout<<current->data<<" ";

			// count++;
		}

		else{
			cout<<endl;
			// count=0;
			if(!q.empty()){
				q.push(NULL);
			}
		}
	}
}

void print(Bst* root){
	if(root==NULL)
		return;

	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
}

int height(Bst* root){
	if(root==NULL){
		return 0;
	}

	return 1+max(height(root->left),height(root->right));

}

void spiral(Bst* root){
	if(root==NULL)
		return;

	stack<Bst*>s1;
	stack<Bst*>s2;

	s1.push(root);
	while(!s1.empty() || !s2.empty()){

		while(!s1.empty()){
			Bst* temp = s1.top();
			s1.pop();

			cout<<temp->data<<" ";

			if(temp->right)
				s2.push(temp->right);
			if(temp->left)
				s2.push(temp->left);
		}

		while(!s2.empty()){
			Bst* temp = s2.top();
			s2.pop();

			cout<<temp->data<<" ";

			if(temp->left)
				s1.push(temp->left);

			if(temp->right)
				s1.push(temp->right);
			
		}
	}
}

void rootToleaf(Bst* root,vector<int> &path){
	if(root==NULL){
		return;
	}
	path.push_back(root->data);

	if(root->left== NULL && root->right == NULL){
		for(auto x:path){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	rootToleaf(root->left,path);
	rootToleaf(root->right,path);
	path.pop_back();
}

Bst* mins(Bst* root){
	while(root->left != NULL)
		root= root->left;

	return root;
}

Bst* Delete(Bst* root,int data){
	if(root==NULL)
		return root;
	else if(data<root->data)
		root->left = Delete(root->left,data);
	else if(data>root->data)
		root->right = Delete(root->right,data);
	else{

		if(root->left == NULL && root->right ==NULL){
			free(root);
			root = NULL;
			
		}
		else if(root->left ==NULL){
			Bst* temp = root;
			root = root->right;
			free(temp);
			
		}
		else if(root->right ==NULL){
			Bst* temp = root;
			root = root->left;
			free(temp);
			// root = temp;
			
		}
		else{
			Bst* temp = mins(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}

	return root;
}

void getVertical(Bst* root,int hd,map<int,vector<int>>&m){
	if(root==NULL){
		return;
	}
	m[hd].push_back(root->data);
	getVertical(root->left,hd-1,m);
	getVertical(root->right,hd+1,m);
}

void verticalOrder(Bst* root){
	map<int,vector<int>>m;
	int hd=0;
	getVertical(root,hd,m);

	map< int,vector<int> > :: iterator it;

	for(it = m.begin();it!=m.end();it++){
		cout<<it->first<<" ";
		for(int i=0;i<it->second.size();i++){
			cout<<it->second[i]<<" ";
		}
		cout<<endl;
	}
}

int leafNode(Bst* root){
	if(root==NULL){
		return 1;
	}
	static int count=0;

	if(root->left==NULL && root->right==NULL){
		count++;
	}

	if(root->left){
		leafNode(root->left);
	}
	if(root->right){
		leafNode(root->right);
	}

	return count;
}

int sum(Bst* root){
	if(root==NULL)
		return 0;
	return (root->data) + (sum(root->left))+(sum(root->right));
}

bool isSum(Bst* root){
	if(root==NULL || (root->left ==NULL && root->right ==NULL ))
		return 1;

	int ls = sum(root->left);
	int rs = sum(root->right);

	if(root->data == ls+rs && isSum(root->left) && isSum(root->right))
		return 1;

	return 0;
}


void nthLargest(Bst* root,int k){
	if(root==NULL)
		return ;
	static int count=1;
	nthLargest(root->right,k);
	if(count==k){
		cout<<root->data<<" ";
	}
	count++;
	nthLargest(root->left,k);

}

int main(){
	Bst* root = NULL;
	root = insert(10,root);
	root = insert(7,root);
	root = insert(12,root);
	root = insert(5,root);
	root = insert(9,root);
	root = insert(8,root);

	// cout<<isSum(root);

	//root = insert(25,root);
	levelOrder(root);
	nthLargest(root,6);
	// cout<<endl;
	// getdiag(root);
	// inorder(root);
	// root = Delete(root,5);
	// inorder(root);
	// levelOrder(root);
	// vector<int>v;
	// rootToleaf(root,v);
	// root = insert(2,root);
	// levelOrder(root);
	// cout<<leafNode(root)<<endl;
	// cout<<height(root);
	// spiral(root);
	

	// verticalOrder(root);
	return 0;
}