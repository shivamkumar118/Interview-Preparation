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
void levelOrder(node *root)
{
    // for an empty tree no traversal is possible
    if(root==NULL)
    return;
    
    // since we have to print in the order of their traversal
    // we need First In First Out (FIFO) principal used in Queue.
    queue<node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        // store the front value
        node* temp = q.front();
        
        //printing the front value
        cout<<temp->data<<" ";
        
        // pop the front value
        q.pop();
        
        if(temp->left != NULL)
        q.push(temp->left);
        if(temp->right != NULL)
        q.push(temp->right);
        
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
    
    levelOrder(root);
	return 0;
}
