#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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

void iterativePreorder(node* root)
{
    if(root==NULL)
    return;
    stack<node*> s;
    s.push(root);
    while(!s.empty())
    {
       node* curr_ele = s.top();
       s.pop();
       // since we need to print root first 
       cout<<curr_ele->key<<" ";
       
       // we pushed right element first and then left element
       // stack follows Last In First Out , so left comes first then right
       // that is our only requirement.
       
       if(curr_ele->right!=NULL)
       s.push(curr_ele->right);
       if(curr_ele->left!=NULL)
       s.push(curr_ele->left);
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
    iterativePreorder(root);
    
    return 0;
}
