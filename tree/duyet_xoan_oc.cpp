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
void traversalbyspiral(node *root)
{
    stack<node*> st1,st2;
    st1.push(root);
    while(st1.size()!=0 || st2.size()!=0)
    {
    	node*tmp;
    	while(st1.size()!=0)
    	{
    		tmp=st1.top();
    		cout<<tmp->val<<" ";
    		if(tmp->right!=NULL)
    			st2.push(tmp->right);
    		if(tmp->left!=NULL)
    			st2.push(tmp->left);
    		st1.pop();
		}
		while(st2.size()!=0)
		{
			tmp=st2.top();
    		cout<<tmp->val<<" ";
    		if(tmp->left!=NULL)
    			st1.push(tmp->left);
    		if(tmp->right!=NULL)
    			st1.push(tmp->right);
    		st2.pop();
		}
	}
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
       	traversalbyspiral(root);
       	cout<<endl;
    }
}
