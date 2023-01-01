#include<bits/stdc++.h>
using namespace std;
int v,e,fi;
int vi[1005];
int parent[1005];
int sz[1005];
vector<int> vv[1005];
void init()
{
    memset(vi,-1,sizeof(vi));
    for(int i=0;i<1005;i++)
        vv[i].clear();
    cin>>v>>e>>fi;
    for(int i=1;i<=v;i++)
    {
        parent[i]=i;
        sz[i]=1;
    }
    int x,y;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        vv[x].push_back(y);
        vv[y].push_back(x);
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
        sz[y]+=sz[x];
        parent[x]=y;
    }
    else 
    {
        sz[x]+=sz[y];
        parent[y]=x;
    }
    return true;
}
void bfs(int i)
{
    vector<pair<int,int>> ans;
    queue<int> qu;
    qu.push(i);
    vi[i]=0;
    int cur;
    while(qu.size()!=0)
    {
        cur=qu.front();
        qu.pop();
        for(auto x:vv[cur])
        {
            if(vi[x]==-1)
            {
                if(un(x,cur))
                {
                    ans.push_back({cur,x});
                }
                qu.push(x);
                vi[x]=0;
            }
        }
    }
    if(ans.size()==v-1)
    {
        for(auto x:ans)
            cout<<x.first<<" "<<x.second<<endl;
    }
    else 
    {
        cout<<"-1"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        init();
        bfs(fi);
    }
}