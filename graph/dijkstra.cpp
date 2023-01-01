#include<bits/stdc++.h>
using namespace std;
int v,e,fi;
vector<pair<int,int>> vv[1005];
void init()
{
    for(int i=0;i<1005;i++)
        vv[i].clear();
    cin>>v>>e>>fi;
   
    int x,y,w;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y>>w;
        vv[x].push_back({y,w});
        vv[y].push_back({x,w});
    }
}
void dijkstra()
{
    int dp[1005];
    for(int i=1;i<=v;i++) dp[i]=1e9;
    dp[fi]=0;
    priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> qu;
    // fi: dis, se: vertice
    qu.push({0,fi});
    pair<int,int> cur;
    while(qu.size()!=0)
    {
        cur=qu.top();
        qu.pop();
        if(dp[cur.second]<cur.first) continue;
        for(auto x: vv[cur.second])
        {
            int u=x.first;// vertice near the cur
            int v=x.second;// the w of that two vertice
            if(dp[u]> dp[cur.second]+v) 
            {
                dp[u]=dp[cur.second]+v;
                qu.push({dp[u],u});
            }
        }
    }
    for(int i=1;i<=v;i++)
    {
        cout<<dp[i]<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        init();
        dijkstra();
        cout<<endl;
    }
}