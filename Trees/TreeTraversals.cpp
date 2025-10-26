

#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int val) {
		data = val;
		left = right = NULL;
	}
};
static int index = -1;
Node* buildTree(vector<int>preorder) {
	index++;
	if(preorder[index] == -1) {
		return NULL;
	}
	Node* root = new Node(preorder[index]);
	root->left = buildTree(preorder);
	root->right = buildTree(preorder);
	return root;
}

void preOrder(Node* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root->right);
}
void inOrder(Node* root){
  if(root==NULL){
    return;
  }
  inOrder(root->left);
  cout<<root->data<<" ";
  inOrder(root->right);
}
void postOrder(Node* root){
  if(root==NULL){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->data<<" ";
}

int main()
{
	vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1} ;
	Node* root = buildTree(preorder);

preOrder(root);
cout<<endl;
inOrder(root);
cout<<endl;
postOrder(root);



	return 0;
}