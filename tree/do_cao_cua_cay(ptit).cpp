#include<bits/stdc++.h>
using namespace std;
vector<int> vv[100005];
int e;
int vi[100005];
int ans;
void init()
{
    ans=0;
    memset(vi,-1,sizeof(vi));
    for(int i=0;i<100005;i++) vv[i].clear();
    cin>>e;
    int x,y;
    for(int i=1;i<e;i++)
    {
        cin>>x>>y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
}
void dfs(int i,int tmp)
{
    ans=max(ans,tmp);
    vi[i]=0;
    for(auto x:vv[i])
    {
        if(vi[x]==-1)
        {
            dfs(x,tmp+1);
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
        dfs(1,0);
        cout<<ans<<endl;
    }
}