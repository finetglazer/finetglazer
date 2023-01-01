#include<bits/stdc++.h>
using namespace std;
vector<int> vv[1005];
int v,e,fi;
bool vi[1005];
void dfs(int i)
{
    vi[i]=false;
    cout<<i<<" ";
    for(auto x: vv[i])
    {
        if(vi[x]==true)
        {
            dfs(x);
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
        dfs(fi);
        cout<<endl;
    }
}