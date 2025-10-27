

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

int count(Node* root){
  if(root==NULL){
    return 0;
  }
 int leftC = count(root->left);
int  rightC = count(root->right);
 return  leftC + rightC + 1 ;
}
int main()
{
	vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1} ;
	Node* root = buildTree(preorder);

cout<<"Count of nodes of tree "<<count(root)<<endl;

	return 0;
}