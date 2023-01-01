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
node *insertNode(node*root,int x)
{
    if(root==NULL) return new node(x);
    if(x>root->val)
    {
        root->right=insertNode(root->right,x);
    }
    else root->left=insertNode(root->left,x);
    return root;
}
bool check(node *root,int x)
{
    if(root==NULL) return false;
    if(x>root->val)
    {
        return check(root->right,x);
    }
    else if(x<root->val) return check(root->left,x);
    else return true;
    
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
    int x;
    cin>>x;
    if(check(root,x)) cout<<"YES";
    else cout<<"NO";
}