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
void makeNode(node *root,int x,int y,char c)
{
    if(c=='L') root->left= new node(y);
    else root->right=new node(y);
}
void insertNode(node *root,int x,int y,char c)
{
    if(root==NULL) return;
    if(root->val==x)
    {
        makeNode(root,x,y,c);
    }
    else 
    {
        insertNode(root->left,x,y,c);
        insertNode(root->right,x,y,c);
    }
}
int ans;
bool isLeaf(node* root)
{
    return root -> left == root -> right and root -> left == NULL;
}
void sumofright(node *root)
{
    if(root==NULL) return ;
    if(root->right!=NULL && isLeaf(root->right)) ans+=root->right->val;
      if(root -> right != NULL and !isLeaf(root -> right))
        sumofright(root -> right);
    if(root -> left != NULL and !isLeaf(root -> left))
        sumofright(root -> left);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ans=0;
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
        sumofright(root);
       	cout<<ans;
       	cout<<endl;
    }
}
