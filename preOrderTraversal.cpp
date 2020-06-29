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
void preOrder(node* root)
{
	// recursive algorithm of preOrder traversal of a binary tree.
	// traversing in the order " Root Left Right ".
    if(root != NULL)
     {
         cout<<root->data<<" ";
         preOrder(root->left);
         preOrder(root->right);
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
    
    preOrder(root);
    
    // Time Complexity O(N)
    // Auxiliary space O(h) where h is height of the tree. 
    
	return 0;
}
