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
node *insertNode(node *root,int a[],int l,int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    root=new node(a[mid]);
    root->left=insertNode(root,a,l,mid-1);
    root->right=insertNode(root,a,mid+1,r);
    return root;
}
void post(node *root)
{
    if(root==NULL) return ;
    post(root->left);
    post(root->right);
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
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        root=insertNode(root,a,0,n-1);
        post(root);
        cout<<endl;
    }
}