#include <bits/stdc++.h>
using namespace std;
vector<int> vv[1005];
int vi[1005];
int v, e, fi, ed;
void dfs(int i)
{
    vi[i] = 0;
    for (auto x : vv[i])
    {
        if (vi[x] == -1)
        {
            dfs(x);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
        for (int i = 0; i < 1005; i++)
            vv[i].clear();
        cin >> v >> e;
        int x, y;
        for (int i = 0; i < e; i++)
        {
            cin >> x >> y;
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        int cnt = 0;
        int count=0;
        int ans=0;
        for (int i = 0; i <= v; i++)
        {
            memset(vi, -1, sizeof(vi));
            vi[i]=0;
            for(int i=1;i<=v;i++)
            {
                if(vi[i]==-1) 
                {
                    dfs(i);
                    cnt++;
                }
            }
            if(i==0) count=cnt;
            if(cnt>count) cout<<i<<" ";
            cnt=0;
        }
       cout<<endl;
    }
}