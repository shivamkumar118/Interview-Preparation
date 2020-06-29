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
int getSizeTree(node* root)
{
	// recursive algorithm to find the size of a tree (total number of nodes)
	
    if(root == NULL)
    return 0;
    
    return 1+getSizeTree(root->left)+getSizeTree(root->right);
}
int main()
{
	// creation of a tree 
    node *root = new node(20);
    root->left = new node(10);
    root->right = new node(30);
    root->right->left = new node(25);
    root->right->right = new node(40);
    
    cout<<getSizeTree(root);
    
    // Time Complexity O(N)
    // Auxiliary space O(h) where h is height of the tree. 
	return 0;
}
