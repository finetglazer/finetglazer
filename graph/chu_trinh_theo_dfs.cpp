#include<bits/stdc++.h>
using namespace std;
int vi[1005];
int parent[1005];
vector<int> vv[1005];
int v,e;
int ed=0;
void init()
{
    cin>>v>>e;
    for(int i=0;i<1005;i++)
        vv[i].clear();
    memset(vi,-1,sizeof(vi));
    for(int i=1;i<=v;i++)
        parent[i]=0;
    int x,y;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
    for(int i=1;i<=v;i++)
    {
        sort(vv[i].begin(),vv[i].end());
    }
}
bool dfs(int i)
{
    vi[i]=0;
    for(auto x:vv[i])
    {
        if(vi[x]==-1)
        {
            parent[x]=i;
            if(dfs(x))
                return true;
        }
        else if(x!=parent[i] and x==1)
        {
            ed=i;
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        init();
        if(dfs(1))
        {
            stack<int> st;
            
            while(ed!=0)
            {
                st.push(ed);
                ed=parent[ed];
            }
            while(st.size()!=0)
            {
                cout<<st.top()<<" ";
                st.pop();
            }
            cout<<"1";
            cout<<endl;
            
        }
        else 
            cout<<"NO"<<endl;
    }
}