#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
    node(int i)
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
    else root->left=insertNode(root->left,x);
    return root;
}
int getmin(node *root)
{
    if(root->left==NULL)
    {
        return root->val;   
    }
    return getmin(root->left);
}
int getmax(node *root)
{
    if(root->right==NULL)
        return root->val;
    return getmax(root->right);
}
int main()
{
    node *root=NULL;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        root=insertNode(root,x);
    }
    cout<<getmax(root)<<" "<<getmin(root);
}