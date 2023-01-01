#include<bits/stdc++.h>
using namespace std;
vector<int> vv[1005];
int v,e,fi;
bool vi[1005];
void bfs(int i)
{
    queue<int> qu;
    qu.push(i);
    vi[i]=false;
    int cur;
    while(qu.size()!=0)
    {
        cur=qu.front();
        cout<<cur<<" ";
        qu.pop();
        for(auto x:vv[cur])
        {
            if(vi[x])
            {
                qu.push(x);
                vi[x]=0;
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
        for(int i=0;i<1005;i++)
        {
            vv[i].clear();
        }
        memset(vi,true,sizeof(vi));
        cin>>v>>e>>fi;
        int x,y;
        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            vv[x].push_back(y);
        }
        bfs(fi);
        cout<<endl;
    }
}