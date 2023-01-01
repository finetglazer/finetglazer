#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
    node(int x)
    {
        val=x;
        left=right=NULL;
    }
    /* data */
};
void makeNode(node *root,int u,int v,char x)
{
    if(x=='L') root->left=new node(v);
    else root->right=new node(v);
}
void insertNode(node *root,int u,int v,char x)
{
    if(root == NULL) return;
    if(root->val==u)
        makeNode(root,u,v,x);
    else 
    {
        insertNode(root->left,u,v,x);
        insertNode(root->right,u,v,x);
    }
}
void cal(node *root)
{
    if(root==NULL) return;
    cout<<root->val<<" ";
    cal(root->left);
    cal(root->right);
}
int main()
{
    node *root=NULL;
    int n;
    cin>>n;
    int x,y;
    char c;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>c;
        if(root==NULL) 
        {
            root= new node(x);
            makeNode(root,x,y,c);
        }
        else 
        {
            insertNode(root,x,y,c);
        }
    }
    cal(root);
}