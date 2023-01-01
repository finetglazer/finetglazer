#include<bits/stdc++.h>
using namespace std;
vector<int> vv[1005];
int v,e,u;
int vi[1005];
int toNum(string s)
{
	int res=0;
	for(int i=0;i<s.size();i++)
	{
		res*=10;
		res+=(s[i]-'0');
	}
	return res;
}
void init()
{
	memset(vi,-1,sizeof(vi));
	for(int i=0;i<1005;i++) vv[i].clear();
	cin>>v>>e>>u;
	int x,y;
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
		vv[x].push_back(y);
//		vv[y].push_back(x);
//	}
//	int v;
//	cin>>v;
//	cin.ignore();
//	int a[v+5][v+5];
//	for(int i=1;i<=v;i++)
//	{
//		for(int j=1;j<=v;j++)
//		{
//			cin>>a[i][j];
//		}
//	}
//	for(int i=1;i<=v;i++)
//		for(int j=1;j<=v;j++)
//			if(a[i][j]==1) vv[i].push_back(j);
//	for(int i=1;i<=v;i++)
//	{
//		for(auto x:vv[i])
//			cout<<x<<" ";
//		cout<<endl;
//	}
}
}
void dfs(int i)
{
	cout<<i<<" ";
	vi[i]=0;
	for(auto x:vv[i])
	{
		if(vi[x]==-1)
		{
			dfs(x);
		}
		
	}
	
}
void bfs(int i)
{
	queue<int> qu;
	qu.push(i);
	vi[i]=0;
	while(qu.size()!=0)
	{
		int cur=qu.front();
		qu.pop();
		cout<<cur<<" ";
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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		init();
		bfs(u);
		cout<<endl;
	}
}

