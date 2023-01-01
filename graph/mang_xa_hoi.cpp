#include<bits/stdc++.h>
using namespace std;
int v,e;
int vi[100005];
vector<int> vv[100005];
void init()
{
    memset(vi,-1,sizeof(vi));
    for(int i=0;i<100005;i++) vv[i].clear();
    cin>>v>>e;
    int x,y;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
}
void dfs(int i)
{
    vi[i]=0;
    for(auto x: vv[i])
    {
        if(vi[x]==-1)
            dfs(x);
    }
}
void cal()
{
    int cnt=0;
    for(int i=1;i<=v;i++)
    {
        if(vi[i]==-1)
        {
            dfs(i);
            cnt++;
        }
    }
    if(cnt==1) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        init();
        cal();
    }
}