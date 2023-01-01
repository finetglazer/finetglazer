#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> vv[1005];
bool bfs(int u,int v)
{
    memset(visited,true,sizeof(visited));
    bool res=true;
    queue<int> qu;
    qu.push(u);
    visited[u]=false;
    while(qu.size()!=0)
    {
        int cur=qu.front();
        qu.pop();
        for(auto i: vv[cur])
        {
            if(i==v)
            {
                res=false;
                break;
            }
            if(visited[i]==true)
            {
                qu.push(i);
                visited[i]=false;
            }
            
        }
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<1005;i++)
        {
            vv[i].clear();
        }
        int v,e;
        cin>>v>>e;
        
        int x,y;
        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        int test;
        cin>>test;
        while(test--)
        {
            
            bool d=true;
            int u,v;
            cin>>u>>v;
            if(bfs(u,v)==false) cout<<"YES";
            else cout<<"NO";
            cout<<endl;
        }
    }
}