#include<bits/stdc++.h>
using namespace std;
struct node
{
  int key;
  node* left;
  node* right;
  node(int u)
  {
      key = u;
      left = right = NULL;
  }
};
void iterativeInorder(node* root)
{
    stack<node*> s;
    node* curr_ele = root;
    while(curr_ele != NULL || s.empty() == false)
    {
        // traversing left until we find a leaf node.
        while(curr_ele != NULL)
        {
            s.push(curr_ele);
            curr_ele = curr_ele->left;
        }
        // we store its reference to a temporary node
        curr_ele = s.top();
        
        // we don't need it now as it is covered
        s.pop(); 
        
        // printing the stored value
        cout<<curr_ele->key<<" ";
        
        // check either it has any right child then traverse right
        curr_ele = curr_ele->right;
    }
}


int main()
{
    node* root = new node(40);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->right = new node(35);
    root->right = new node(50);
    root->right->left = new node(60);
    iterativeInorder(root);
    
    return 0;
}
