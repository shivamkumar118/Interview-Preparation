#include <bits/stdc++.h>
using namespace std;
struct node
{
	// every node has a data and two left and right children node 
  int data;
  node* left;
  node* right;
  node(int key)
  {
      data = key;
      left = right = NULL;
  }
};
void postOrder(node* root)
{
	// recursive algorithm of postOrder traversal of a binary tree.
	// traversing in the order " Left Right Root ".
    if(root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
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
    
    postOrder(root);
    
    // Time Complexity O(N)
    // Auxiliary space O(h) where h is height of the tree. 
    
	return 0;
}
