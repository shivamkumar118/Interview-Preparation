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
int getHeightTree(node* root)
{
	// recursive algorithm to find the height of a given binary tree (number of levels).
   if(root == NULL)
   return 0;
   
   return max(getHeightTree(root->left),getHeightTree(root->right)) + 1;
}
int main()
{
	// creation of a tree 
    node *root = new node(20);
    root->left = new node(10);
    root->right = new node(30);
    root->right->left = new node(25);
    root->right->right = new node(40);
    
    cout<<getHeightTree(root);
    
    // Time Complexity O(N)
    // Auxiliary space O(h) where h is height of the tree. 
	return 0;
}
