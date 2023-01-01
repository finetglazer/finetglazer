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
void inoreder(node *root)
{
    if(root==NULL) return ;
    inoreder(root->left);
    cout<<root->val<<" ";
    inoreder(root->right);
}
node *find(node *root)
{
    if(root->left==NULL) return root;
    return find(root->left);
}
node *delnode(node *root,int del)
{
    if(root==NULL) return root;
    if(del>root->val)
        root->right=delnode(root->right,del);
    else if(del<root->val)
        root->left=delnode(root->left,del);
    else 
    {
        if(root->left==NULL && root->right==NULL)
            return NULL;
        else if(root->left==NULL) 
        {
            node *tmp=root->right;
            delete(root);
            return tmp;
        }
        else if(root->right==NULL)
        {
            node *tmp=root->left;
            delete(root);
            return tmp;
        }
        node *tmp=find(root->right);
        root->val=tmp->val;
        root->right= delnode(root->right,tmp->val);
    }
    return root;
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
    int del;
    cin>>del;
    root=delnode(root,del);
    inoreder(root);
}