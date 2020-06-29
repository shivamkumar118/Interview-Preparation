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
int maxElemTree(node* root)
{
	// recursive algorithm to find the maximum node in a given binary tree.
    if(root == NULL)
    return INT_MIN;
    
    return max(root->data,max(maxElemTree(root->left),maxElemTree(root->right)));
}
int main()
{
	// creation of a tree 
    node *root = new node(20);
    root->left = new node(10);
    root->right = new node(30);
    root->right->left = new node(25);
    root->right->right = new node(40);
    
    cout<<maxElemTree(root);
    
    // Time Complexity O(N)
    // Auxiliary space O(h) where h is height of the tree. 
	return 0;
}
