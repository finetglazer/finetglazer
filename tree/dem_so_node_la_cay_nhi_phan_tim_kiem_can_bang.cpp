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
node *insertNode(node *root,int a[],int l,int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    root=new node(mid);
    root->left=insertNode(root->left,a,l,mid-1);
    root->right=insertNode(root->right,a,mid+1,r);
    return root;
}
int ans;
void cnt(node *root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
        ans++;
    cnt(root->left);
    cnt(root->right);
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
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        root=insertNode(root,a,0,n-1);
        cnt(root);
        cout<<ans<<endl;
    }
}