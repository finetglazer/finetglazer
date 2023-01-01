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
    if(c=='L') root->left= new node(y);
    else root->right=new node(y);
}
void insertNode(node *root,int x,int y,char c)
{
    // chen y vao x
    if(root==NULL) return ;
    if(root->val==x) makeNode(root,x,y,c);
    else 
    {
        insertNode(root->left,x,y,c);
        insertNode(root->right,x,y,c);
    }
}
int height(node *root)
{
    if(root==NULL ) return -1;
    return max(height(root->left), height(root->right))+1;
}
bool check(node *root,int h,int tmp)
{
    if(root==NULL) return true;
    if(root->left==NULL && root->right==NULL) 
    {
        if(tmp!=h)
            return false;
        else return true;
    }
    if(check(root->left,h,tmp+1)==false) return false ;
    if(check(root->right,h,tmp+1)==false) return false;
    return true;
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
            root=new node(x);
            makeNode(root,x,y,c);
        } 
        else
            insertNode(root,x,y,c);
    }
    int h=height(root);
    // cout<<h;
    if(check(root,h,0)) cout<<"YES";
    else cout<<"NO";


}