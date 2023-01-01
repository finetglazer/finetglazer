#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
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
void transfer(node *root)
{
	if(root==NULL) return;
	transfer(root->left);
	ans.push_back(root->val);
	transfer(root->right);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	ans.clear();
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
        transfer(root);
       	sort(ans.begin(),ans.end());
       	for(auto x:ans)
       		cout<<x<<" ";
       	cout<<endl;
    }
}
