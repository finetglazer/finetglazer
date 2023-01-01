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
    if(x>root->val) root->right=insertNode(root->right,x);
    else root->left=insertNode(root->left,x);
    return root;
}
void pre(node *root)
{
    if(root==NULL) return;
    cout<<root->val<<" ";
    pre(root->left);
    pre(root->right);
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
        pre(root);
        cout<<endl;
    }
}