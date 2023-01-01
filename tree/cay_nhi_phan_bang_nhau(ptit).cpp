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
void makeNode1(node *root1,int x,int y,char c)
{
    if(c=='L') root1->left= new node(y);
    else root1->right=new node(y);
}
void insertNode1(node *root1,int x,int y,char c)
{
    if(root1==NULL) return;
    if(root1->val==x)
    {
        makeNode1(root1,x,y,c);
    }
    else 
    {
        insertNode1(root1->left,x,y,c);
        insertNode1(root1->right,x,y,c);
    }
}
void makeNode2(node *root2,int x,int y,char c)
{
    if(c=='L') root2->left= new node(y);
    else root2->right=new node(y);
}
void insertNode2(node *root2,int x,int y,char c)
{
    if(root2==NULL) return;
    if(root2->val==x)
    {
        makeNode2(root2,x,y,c);
    }
    else 
    {
        insertNode2(root2->left,x,y,c);
        insertNode2(root2->right,x,y,c);
    }
}
bool check(node *root1,node *root2)
{
	if(root1==NULL && root2==NULL) return true;
	else if(root1==NULL && root2!=NULL) return false;
	else if(root1!=NULL && root2==NULL) return false;
	if(root1->val!=root2->val) return false;	
	if(check(root1->left,root2->left)==false) return false;
	if(check(root2->right,root2->right)==false) return false;
	return true;
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        node *root1=NULL;
        node *root2=NULL;
        int n,m;
        cin>>n;
        int x,y;
        char c;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y>>c;
            if(root1==NULL)
            {
                root1=new node(x);
                makeNode1(root1,x,y,c);
            }
            else 
                insertNode1(root1,x,y,c);
        }
        cin>>m;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y>>c;
            if(root2==NULL)
            {
                root2=new node(x);
                makeNode2(root2,x,y,c);
            }
            else 
                insertNode2(root2,x,y,c);
        }
        if(check(root1,root2)) cout<<"1";
        else cout<<"0";
        cout<<endl;
    }
}
