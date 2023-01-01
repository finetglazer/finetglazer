#include<bits/stdc++.h>
using namespace std;
int v,e;
bool vi[1005];
vector<int> vv[1005];
void bfs(int i)
{
    queue<int> qu;
    qu.push(i);
    vi[i]=1;
    int cur;
    while(qu.size()!=0)
    {
        cur=qu.front();
        qu.pop();
        for(auto j:vv[cur])
        {
            if(vi[j]==0)
            {
                qu.push(j);
                vi[j]=1;
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
        memset(vi,0,sizeof(vi));
      
        for(int i=0;i<1005;i++)
        {
            vv[i].clear();
        }
        cin>>v>>e;
        int x,y;
        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        int ans=0;
        for(int i=1;i<=v;i++)
        {
            if(vi[i]==0)
            {
                ans++;
                bfs(i);
                
            }
        }
        cout<<ans;
        cout<<endl;
    }
}