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
};
void makeNode(node *root,int x,int y,char c)
{
    if(c=='L') root->left=new node(y);
    else root->right=new node(y);
}
void insertNode(node *root,int x,int y,char c)
{
    if(root==NULL) return ;
    if(root->val==x) makeNode(root,x,y,c);
    else 
    {
        insertNode(root->left,x,y,c);
        insertNode(root->right,x,y,c);
    }
}
void traversalbylevel(node *root)
{
    queue<node*> qu;
    qu.push(root);
    node *cur;
    while(qu.size()!=0)
    {
        cur=qu.front();
        qu.pop();
        cout<<cur->val<<" ";
        if(cur->left!=NULL)
            qu.push(cur->left);
        if(cur->right!=NULL)
            qu.push(cur->right);
    }
}
int main()
{
    struct node *root=NULL;
    int n;
    cin>>n;
    int x,y;
    char c;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>c;
        if(root==NULL) 
        {
            root=new node(x);
            makeNode(root,x,y,c);
        }
        else 
            insertNode(root,x,y,c);
    }
    traversalbylevel(root);
}