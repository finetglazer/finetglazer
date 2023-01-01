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
	if(root->val==x) makeNode(root,x,y,c);
	else
	{
		insertNode(root->left,x,y,c);
		insertNode(root->right,x,y,c);
	}
}  
int height(node *root)
{
    if(root==NULL) return -1;
    return max(height(root->left),height(root->right))+1;
}
bool check(node *root,int tmp,int h)
{
    if(root==NULL) return true;
    if(root->left==NULL && root->right==NULL)
    {
        if(tmp!=h) return false;
    }
    if(check(root->left,tmp+1,h)==false) return false;
    if(check(root->right,tmp+1,h)==false) return false;
    return true;
}
bool check2(node *root)
{
	if(root==NULL) return true;
	if(root->left==NULL && root->right!=NULL) return false;
	if(root->left!=NULL && root->right==NULL) return false;
	if(check2(root->left)==false ) return false;
	if(check2(root->right)==false) return false;
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		node *root=NULL;
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
		if(check(root,0,h) && check2(root)) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}
