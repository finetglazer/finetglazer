#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *left,*right;
	node (int i)
	{
		val=i;
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
	if(root->val==x)
		makeNode(root,x,y,c);
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
		cout<<cur->val<<" ";
		qu.pop();
		if(cur->left!=NULL) qu.push(cur->left);
		if(cur->right!=NULL) qu.push(cur->right);
	}
}
void traversalbyspiral(node *root)
{
	stack<node*> st1,st2;
	st1.push(root);
	while(st1.size()!=0 || st2.size()!=0)
	{
		node *cur;
		while(st1.size()!=0)
		{
			cur=st1.top();
			cout<<cur->val<<" ";
			st1.pop();
			if(cur->right!=NULL) st2.push(cur->right);
			if(cur->left!=NULL) st2.push(cur->left);
		}
		while(st2.size()!=0)
		{
			cur=st2.top();
			cout<<cur->val<<" ";
			st2.pop();
			if(cur->left!=NULL) st1.push(cur->left);
			if(cur->right!=NULL) st1.push(cur->right);
		}
	
	}
}
int height(node *root)
{
	if(root==NULL) return -1;
	return max(height(root->left),height(root->right)) +1;
}
bool check(node *root,int tmp,int h)
{
	if(root==NULL) return true;
	if(root->left==NULL && root->right==NULL)
	{
		if(tmp!=h) return false;
		else return true;
	}		
	if(check(root->left,tmp+1,h)==false) return false;
	if(check(root->right,tmp+1,h)==false) return false;
	return true;
}
bool checkpf(node *root)
{
	if(root==NULL) return true;
	if(root->left==NULL && root->right!=NULL) return false;
	if(root->left!=NULL && root->right==NULL) return false;
	if(checkpf(root->left)==false) return false;
	if(checkpf(root->right)==false) return false;
	return true;
}
bool checkdif(node *root,node*root1)
{
	if(root==NULL && root1==NULL) return true;
	else if(root==NULL && root1!=NULL) return false;
	else if(root!=NULL && root1==NULL) return false;
	if(root->val!=root1->val) return false;
	if(checkdif(root->left,root1->left)==false) return false; 
	if(checkdif(root->right,root1->right)==false) return false; 
	return true;
}
node* buildTree(node *root,int n)
{
	if(root==NULL)
	{
		return new node(n);
	}
	if(n>root->val) 
		root->right=buildTree(root->right,n);
	else root->left=buildTree(root->left,n);
	return root;
}
// find tree inorder sorted;
vector<int> vv;
void transfer(node *root)
{
	if(root==NULL) return ;
	vv.push_back(root->val);
	transfer(root->left);
	transfer(root->right);
} 
void traversalbypost(node *root)
{
	if(root==NULL) return;
	traversalbypost(root->left);
	traversalbypost(root->right);
	cout<<root->val<<" ";
}
void traversalbypre(node *root)
{
	if(root==NULL) return ;
	cout<<root->val<<" ";
	traversalbypre(root->left);
	traversalbypre(root->right);
 } 
void printnode(node *root)
{
	if(root==NULL) return;
	if(root->left==NULL && root->right==NULL)
	{
		cout<<root->val<<" ";
		return;
	} 
	printnode(root->left);
	printnode(root->right);
}
int ans=0;
void countmid(node *root)
{
	if(root==NULL) return;
	if(root->left!=NULL || root->right!=NULL) ans++;
	
	countmid(root->left);
	countmid(root->right);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		node *root=NULL;
		int n;
		ans=0;
		cin>>n;
		int tmp;
		for(int i=0;i<n;i++)
		{
			cin>>tmp;
			root=buildTree(root,tmp);
		}
		cout<<height(root);
//		countmid(root);
//		cout<<ans;
//		printnode(root);
//		int n;
//		cin>>n;
//		int a[n+5];
//		bool d=true;
//		for(int i=0;i<n;i++)
//		{
//			cin>>a[i];
//		}
//		for(int i=0;i<n-1;i++)
//		{
//			if(a[i]>=a[i+1])
//			{
//				d=false;
//				break;
//			}
//		}
//		if(d) cout<<"1";
//		else cout<<"0";
//		node *root=NULL;
//		int n;
//		cin>>n;
//		int tmp;
//		for(int i=0;i<n;i++)
//		{
//			cin>>tmp;
//			root=buildTree(root,tmp);
//		}
//		traversalbypost(root);
//		traversalbypost(root);
//		node *root=NULL;
//		int n;
//		cin>>n;
//		int x,y;
//		char c;
//		for(int i=0;i<n;i++)
//		{
//			cin>>x>>y>>c;
//			if(root==NULL)
//			{
//				root=new node(x);
//				makeNode(root,x,y,c);	
//			}			
//			else
//				insertNode(root,x,y,c);
//		}
//		node *root1=NULL;
//		cin>>n;
//		for(int i=0;i<n;i++)
//		{
//			cin>>x>>y>>c;
//			if(root1==NULL)
//			{
//				root1=new node(x);
//				makeNode(root1,x,y,c);	
//			}			
//			else
//				insertNode(root1,x,y,c);
//		}
		vv.clear();
//		vector<int> vv;
//		transfer(root);
//		sort(vv.begin(),vv.end());
//		for(int i=0;i<vv.size();i++) cout<<vv[i]<<" ";
//		int h=height(root);
//		if(checkdif(root,root1)) cout<<"1";
//		else cout<<"0";
//		if(check(root,0,h) && checkpf(root)) cout<<"Yes";
//		else cout<<"No";
//		traversalbyspiral(root);
//		if(check(root,0,h)) cout<<"1";
//		else cout<<"0";
		cout<<endl;
//		cout<<height(root)<<endl;
//		traversalbylevel(root);
//		cout<<endl;
	}
}
