#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node* left;
  node* right;
  node(int key)
  {
      data = key;
      left = right = NULL;
  }
};
void inOrder(node* root)
{
	//recursive algorithm of inOrder traversal of a binary tree.
	// traversing in the order " Left Root Right ".
	 
    if(root != NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
int main()
{
	// creation of a tree 
    node *root = new node(20);
    root->left = new node(10);
    root->right = new node(30);
    root->right->left = new node(25);
    root->right->right = new node(40);
    
    inOrder(root);
    
    // Time Complexity O(N)
    // Auxiliary space O(h) where h is height of the tree. 
	return 0;
}
