#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *left,*right;
	node(int i)
	{
		val=i;
		left=right=NULL;	
	}	
};
node * insertNode(node *root,int x)
{
	if(root==NULL)
	{
		return new node(x);
	}
	if(x>root->val) 
	{
		root->right=insertNode(root->right,x);
	}
	else 
		root->left=insertNode(root->left,x);
	return root;
}
//node* buildTree(node *root,int a[],int l,int r)
//{
//	if(l>r) return NULL ;
//	int mid=(l+r)/2;
//	root=new node(a[mid]);
//	root->left=buildTree(root->left,a,l,mid-1);
//	root->right=buildTree(root->right,a,mid+1,r);
//	return root;
//}
node *buildTree(node *root,int a[],int l,int r)
{
	if(l>r) return NULL;
	int m=(l+r)/2;
	root=new node(a[m]);
	root->left=buildTree(root,a,l,m-1);
	root->right=buildTree(root,a,m+1,r);
	return root;
} 
int cnt=0;
void dem(node *root)
{
	if(root==NULL) return;
	if(root->left==NULL && root->right==NULL) 
	{
		cnt++;
		return;	
	}
	dem(root->left);
	dem(root->right);
		
	
}
void pre(node *root)
{
	if(root==NULL) return;
	cout<<root->val<<" ";
	pre(root->left);
	pre(root->right);
}
void post(node *root)
{
	if(root==NULL) return;
	post(root->left);
	post(root->right);
	cout<<root->val<<" ";
}
vector<int> vv[100005];
int vi[100005];
int ans,fi,v,e,se;
//void dfs(int i,int tmp=0)
//{
//	ans=max(ans,tmp);
//	visit[i]=0;
//	for(auto x:vv[i])
//	{
//		if(visit[x]==-1)
//		{
//			dfs(x,tmp+1);
//		}
//	}
//}
void dfs(int i)
{
	cout<<i<<" ";
	vi[i]=0;
	for(auto x:vv[i])
	{
		if(vi[x]==-1) dfs(x);
	}
}
void bfs(int i)
{
	queue<int> qu;
	qu.push(i);
	vi[i]=0;
	int cur;
	while(qu.size()!=0)
	{
		cur=qu.front();
		cout<<cur<<" ";
		qu.pop();
		for(auto x:vv[cur])
		{
			if(vi[x]==-1)
			{
				vi[x]=0;
				qu.push(x);
			}
			
		}
	}
}
void dfs1(int i,int u,int v)
{
	vi[i]=0;
	for(auto x:vv[i])
	{
		if((i==u and v==x) or (i==v and u==x))
			continue;
		if(vi[x]==-1)
		{
			dfs1(x,u,v);
		}
	}
}
void dfs2(int i)
{
	vi[i]=0;
	for(auto x:vv[i])
	{
		if(vi[x]==-1)
			dfs2(x);
	}
}
void dfs3(int u)
{
	for(auto x:vv[u])
	{
		if(vi[x]==-1)
		{
			vi[x]=u;
			dfs3(x);			
		}
	}
}
void bfs3(int u)
{
	queue<int> qu;
	qu.push(u);
	int cur;
	while(qu.size()!=0)
	{
		cur=qu.front();
		qu.pop();
		for(auto x:vv[cur])
		{
			if(vi[x]==-1)
			{
				vi[x]=cur;
				qu.push(x);
			}
		}
	}
}
void dfs5(int i)
{
	vi[i]=0;
	for(auto x:vv[i])
	{
		if(vi[x]==-1)
		{
			dfs5(x);
		}
	}
}
//bool checkct(int i,int par)
//{
//	for(auto x:vv[i])
//	{
//		if(vi[x]==-1)
//		{
//			vi[x]=i;
//			if(checkct(x,i)==true) return true;
//		}
//		else if(x!=vi[i]) return true;
//	}
//	return false;
//}
int level[1005];
bool checkway()
{
	queue<int> qu;
	int cnt=0;
	for(int i=1;i<=v;i++)
	{
		if(vi[i]==0) 
		{
			qu.push(i);
			cnt++;
		}
	}
	while(qu.size()!=0)
	{
		int cur=qu.front();
		qu.pop();
		for(auto x:vv[cur])
		{
			vi[x]--;
			if(vi[x]==0)
			{
				qu.push(x);
				cnt++;
			}
		}
	}
	if(cnt==v) return true;
	else return false;
}
int parent[1005];
int sz[1005];
//int find(int i)
//{
//	if(i==parent[i]) return parent[i];
//	return parent[i]=find(parent[i]);
//}
//bool un(int x,int y)
//{
//	x=find(x);
//	y=find(y);
//	if(x==y) return false;
//	else if(x<y)
//	{
//		parent[x]=y;
//		sz[y]+=sz[x];
//	}
//	else 
//	{
//		parent[x]=y;
//		sz[x]+=sz[y];
//	}
//	return true;
//}
vector<pair<int,int>> lst;
//bool ck()
//{
//	bool d=true;
//	int cnt=0;
//	for(auto i:lst)
//	{
//		if(un(i.first,i.second)==false)
//		{
//			d=false;
//			break;
//		}
//		else cnt++;
//	}
//	if(d && cnt==v-1) return true;
//	else return false; 
//}

//
int col;
bool to=true;
// is safe
bool isSafe(int i,int j)
{
	for(auto x:vv[i])
	{
		if(vi[x]==j) return false;
	}
	return true;
}
void Try(int i)
{
	for(int j=1;j<=col;j++)
	{
		if(isSafe(i,j))
		{
			vi[i]=j;
			if(i==v) to=false;
			else Try(i+1);
		}
	}
}
//int find(int i)
//{
//	if(i==parent[i]) return i;
//	return parent[i]=find(parent[i]);
//}
//bool un(int x,int y)
//{
//	x=find(x);
//	y=find(y);
//	if(x==y) return false;
//	else if(x<y)
//	{
//		parent[x]=y;
//		sz[y]+=sz[x];
//	}
//	else
//	{
//		parent[y]=x;
//		sz[x]+=sz[y];
//	}
//	return true;
//}
//void dt2p()
//{
//	bool d=true;
//	for(auto x:lst)
//	{
//		if(un(x.first,x.second)==false) 
//		{
//			d=false;
//			break;
//		}
//	}
//	if(d) cout<<"YES";
//	else cout<<"NO";
//}
void mxh(int i)
{
	vi[i]=0;
	for(auto j:vv[i])
	{
		if(vi[j]==-1)
		{
			mxh(j);
		}
	}
}
int find(int i)
{
	if(i==parent[i]) return i;
	return parent[i]=find(parent[i]);	
}
bool un(int x,int y)
{
	x=find(x);
	y=find(y);
	if(x==y) return false;
	else if(sz[x]<sz[y])
	{
		parent[x]=y;
		sz[y]+=sz[x];
	}
	else
	{
		parent[y]=x;
		sz[x]+=sz[y];
	}
	return true;
}
void dsu()
{
	bool d=true;
	for(auto x:lst)
	{
		if(un(x.first,x.second)==false)
		{
			d=false;
			break;
		}
	}
	if(d) cout<<"NO";
	else cout<<"YES";
}
bool ct2=true;
int ed=0;
bool chutrinh(int i)
{
	for(auto x:vv[i])
	{
		if(vi[x]==-1)
		{
			vi[x]=i;
			if(chutrinh(x)) return true; 
		}
		else if(x==1 && x!=vi[i]) 
		{
			ed=i;
			return true;
		}
	}
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ed=0;
		for(int i=0;i<1005;i++)
		{
			vv[i].clear();
		}
		memset(vi,-1,sizeof(vi));
		cin>>v>>e;
		int x,y;
		for(int i=0;i<e;i++)
		{
			cin>>x>>y;
			vv[x].push_back(y);
			vv[y].push_back(x);
		}
		for(int i=1;i<=v;i++)
		{
			sort(vv[i].begin(),vv[i].end());
		}
		vi[1]=0;
		if(chutrinh(1))
		{
			stack<int> st;
            while(ed!=0)
            {
                st.push(ed);
                ed=vi[ed];
            }
            while(st.size()!=0)
            {
                cout<<st.top()<<" ";
                st.pop();
            }
            cout<<"1";
            cout<<endl;
		}
		else cout<<"NO";
//		lst.clear();
//		cin>>v>>e;
//		int x,y;
//		for(int i=1;i<=v;i++)
//		{
//			parent[i]=i;
//			sz[i]=1;
//		}
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			lst.push_back({x,y});
//		}
//		dsu();
//		cnt=0;
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		memset(vi,-1,sizeof(vi));
//		cin>>v>>e;
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//			vv[y].push_back(x);
//		}
//		for(int i=1;i<=v;i++)
//		{
//			if(vi[i]==-1)
//			{
//				mxh(i);
//				cnt++;
//			}
//		}
//		if(cnt>1) cout<<"NO";
//		else cout<<"YES";
//		lst.clear();
//		memset(vi,-1,sizeof(vi));
//		cin>>v>>e;
//		for(int i=1;i<=v;i++)
//		{
//			parent[i]=i;
//			sz[i]=1;
//		}
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			lst.push_back({x,y});
//		}
//		dt2p();
//		to=true;
//		memset(vi,-1,sizeof(vi));
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		cin>>v>>e>>col;
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//			vv[y].push_back(x);
//		}
//		Try(1);
//		if(to) cout<<"NO";
//		else cout<<"YES";
//		cin>>v;
//		for(int i=1;i<=v;i++)
//		{
//			parent[i]=i;
//			sz[i]=1;
//		}
//		lst.clear();
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		int x,y;
//		for(int i=0;i<v-1;i++)
//		{
//			cin>>x>>y;
//			lst.push_back({x,y});
//		}
//		if(ck()) cout<<"YES";
//		else cout<<"NO";
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		cin>>v;
//		int x,y;
//		for(int i=0;i<v-1;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//			vv[y].push_back(x);
//		}
//		bool d=true;
//		for(int i=1;i<=v;i++)
//		{
//			if(vv[i].size()!=1) 
//			{
//				d=false;
//				break;
//			}
//		}
//		if(d) cout<<"YES";
//		else cout<<"NO";
//		cin>>v>>e;
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		memset(vi,0,sizeof(vi));
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
////			vv[y].push_back(x);
//			vi[y]++;
//		}
////		vi[1]=0;
//		bool d=true;
//		if(checkway()==true) cout<<"NO";
//		else cout<<"YES";
//		if(d) cout<<"NO";
//		else cout<<"YES";
//		cin>>v>>e;
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		memset(vi,-1,sizeof(vi));
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//			vv[y].push_back(x);
//		}
//		int cnt=0;
//		for(int i=1;i<=v;i++)
//		{
//			if(vi[i]==-1)
//			{
//				dfs5(i);
//				cnt++;
//			}
//		}
//		cout<<cnt;
//		cin>>v>>e>>fi>>se;
//		memset(vi,-1,sizeof(vi));
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//			vv[y].push_back(x);
//		}
//		vi[fi]=0;
//		dfs3(fi);
//		if(vi[se]==-1)
//		{
//			cout<<"-1";
//		}
//		else
//		{
//			vector<int> ans;
//			int tmp=se;
//			stack<int> st;
//			while(tmp!=fi)
//			{
//				st.push(tmp);
//				tmp=vi[tmp];
//			}
//			ans.push_back(fi);
//			while(st.size()!=0)
//			{
//				ans.push_back(st.top());
//				st.pop();
//			}
//			for(int i=0;i<ans.size();i++)
//			{
//				cout<<ans[i]<<" ";
//			}
//		}
//		cin>>v>>e;
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		int x,y;
//		vector<int> vvv[1005];
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//			vvv[y].push_back(x);
//		}
//		bool d=1;
//		for(int i=1;i<=v;i++)
//		{
//			if(vv[i].size()!=vvv[i].size()) d=0;
//		}
//		if(d) cout<<"1";
//		else cout<<"0";
//		cout<<endl;
//		cin>>v>>e>>fi>>se;
//		memset(vi,-1,sizeof(vi));
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
////			vv[y].push_back(x);
//		}
//		vi[fi]=-1;
//		bfs3(fi);
//		if(vi[se]!=-1)
//		{
//			stack<int> st;
//			int tmp=se;
//			while(tmp!=fi)
//			{
//				tmp=vi[tmp];
//				st.push(tmp);
//			}
//			vector<int> res;
//			
//			while(st.size()!=0)
//			{
//				res.push_back(st.top());
//				st.pop();
//			}
//			res.push_back(se);
//			for(int i=0;i<res.size();i++)
//				cout<<res[i]<<" ";
//		}
//		else cout<<"-1";
//		cin>>v>>e;
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//			vv[y].push_back(x);
//		}
//		for(int i=1;i<=v;i++)
//		{
//			
//			memset(vi,-1,sizeof(vi));
//			int cnt=0;
//			vi[i]=0;
//			for(int j=1;j<=v;j++)
//			{
//				if(vi[j]==-1)
//				{
//					dfs2(j);
//					cnt++;
//				}
//				
//			}
//			if(cnt>1)
//			{
//				cout<<i<<" ";
//			}
//		}
//		vector<pair<int,int>> lst;
//		cin>>v>>e;
//		for(int i=0;i<1005;i++)
//			vv[i].clear();
//		
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//			vv[y].push_back(x);
//			lst.push_back({x,y});
//		}
//		vector<pair<int,int>> ans;
//		for(auto x:lst)
//		{
//			memset(vi,-1,sizeof(vi));
//			int cnt=0;
//			for(int i=1;i<=v;i++)
//			{
//				if(vi[i]==-1)
//				{
//					dfs1(i,x.first,x.second);
//					cnt++;	
//				}		
//
//			}
//			if(cnt>1)
//			{
//				ans.push_back({x.first,x.second});	
//			}	
////			cout<<cnt<<endl;
//		}
//		for(auto x:ans)
//		{
//			cout<<x.first<<" "<<x.second<<" ";
//		}
//		cin>>v>>e>>fi;
//		for(int i=0;i<1005;i++) 
//			vv[i].clear();
//		memset(vi,-1,sizeof(vi));
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//		}
//		bfs(fi);
//		cin>>v>>e>>fi;
//		for(int i=0;i<1005;i++) 
//			vv[i].clear();
//		memset(vi,-1,sizeof(vi));
//		int x,y;
//		for(int i=0;i<e;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//				
//		}
//		dfs(fi);
//		ans=0;
//		for(int i=0;i<100005;i++)
//			vv[i].clear();
//		memset(visit,-1,sizeof(visit));
//		int x,y;
//		int n;
//		cin>>n;
//		for(int i=0;i<n-1;i++)
//		{
//			cin>>x>>y;
//			vv[x].push_back(y);
//			vv[y].push_back(x);
//		}
//		dfs(1);
////			cout<<ans<<" ";
//		cout<<ans;
//		cnt=0;
//		node*root=NULL;
//		int n;
//		cin>>n;
//		int a[n+5];
//		for(int i=0;i<n;i++)
//		{
//			cin>>a[i];
//		}
//		sort(a,a+n);
//		root=buildTree(root,a,0,n-1);
//		pre(root);
//		dem(root);
//		cout<<root->val;
//		post(root);
//		cout<<cnt;
		cout<<endl;
	}

	
}
