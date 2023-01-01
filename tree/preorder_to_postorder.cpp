#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
    node (int i)
    {
        val=i;
        left=right=NULL;
    }
};
node *insertNode(node *root,int x)
{
    if(root==NULL) return new node(x);
    if(x>root->val) 
    {
        root->right=insertNode(root->right,x);
    }
    else 
    {
        root->left=insertNode(root->left,x);
    }
    return root;
}
void postorder(node *root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
void inoreder(node *root)
{
    if(root==NULL) return ;
    inoreder(root->left);
    cout<<root->val<<" ";
    inoreder(root->right);
}
void preoreder(node *root)
{
    if(root==NULL) return ;
    cout<<root->val<<" ";
    preoreder(root->left);
    preoreder(root->right);
}
int main()
{
    node *root=NULL;
    int n;
    cin>>n;
    int tmp;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        root=insertNode(root,tmp);
    }
    postorder(root);
}