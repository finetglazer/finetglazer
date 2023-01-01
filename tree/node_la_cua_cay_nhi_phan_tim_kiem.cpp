#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *left;
    node*right;
    node(int i)
    {
        val=i;
        left=right=NULL;
    }
};
node* insertNode(node *root,int x)
{
    if(root==NULL) return new node(x);
    if(x> root->val) 
        root->right= insertNode(root->right,x);
    else root->left=insertNode(root->left,x);
    return root;
}
void cal(node *root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) 
    {
        cout<<root->val<<" ";
        return;
    }
    cal(root->left);
    cal(root->right);
}
void postorder(node *root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
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
        cal(root);
        cout<<endl;
    }
}