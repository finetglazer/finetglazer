#include<bits/stdc++.h>
using namespace std;
struct edge
{
	int x,y,w;
};
vector<pair<int,int>> vv[1005];
int sz[1005];
int parent[1005];
int v,e;
int vi[1005];
int fi,ed;

bool cmp(edge a,edge b)
{
	return a.w<b.w;
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
int cnt ;
bool check=true;
vector<pair<int,int> >ans;
//void dfs(int i)
//{
//	
//	if(cnt==v-1) check=false;
//	for(auto x:vv[i])
//	{
//		if(vi[x]==-1)
//		{
//			if(un(i,x))
//			{
//				ans.push_back({i,x});
//				cnt++;
//				dfs(x);	
//			}
//		}
//	}
//}
//void dsu()
//{
//	int len=0;
//	int cnt=0;
//	for(auto i:vv)
//	{
//		if(cnt==v-1) break;
//		if(un(i.x,i.y))
//		{
//			cnt++;
//			len+=i.w;
//		}
//	}
//	cout<<len;
//}
void djk()
{
	int d[1005];
	for(int i=1;i<=v;i++)
	{
		d[i]=int(1e9);
	}
	
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	pq.push({0,fi});
	d[fi]=0;
	while(pq.size()!=0)
	{
		pair<int,int> cur;
		cur=pq.top();
		int dis=cur.first;
		int ver=cur.second;
		pq.pop();
		if(dis>d[ver]) continue;
		for(auto i:vv[ver])
		{
			int dinh=i.first;
			int kc=i.second;
			if(d[dinh]>d[ver]+kc)
			{
				d[dinh]=d[ver]+kc;
				pq.push({d[dinh],dinh});
			}
		}
	}
	for(int i=1;i<=v;i++)
	{
		cout<<d[i]<<" ";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
//		vv.clear();
		memset(vi,-1,sizeof(vi));
		edge cur;
		cin>>v>>e>>fi;
		for(int i=1;i<1005;i++)
			vv[i].clear();
		for(int i=1;i<=v;i++)
		{
			parent[i]=i;
			sz[i]=1;
		}
		for(int i=0;i<e;i++)
		{
			cin>>cur.x>>cur.y>>cur.w;
			vv[cur.x].push_back({cur.y,cur.w});
			vv[cur.y].push_back({cur.x,cur.w});
		}
		djk();
//		sort(vv.begin(),vv.end(),cmp);
//		dsu();
		cout<<endl;
	}
}
