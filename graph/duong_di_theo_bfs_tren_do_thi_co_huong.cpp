#include<bits/stdc++.h>
using namespace std;
vector<int> vv[1005];
int vi[1005];
int v,e,fi,ed;
void bfs(int i)
{
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
                qu.push(x);
                vi[x]=cur;
            }
        }
    }
}
void findWay(vector<int> graph[],int &fi,int &se)
{
    bfs(fi);
    if(vi[se]==-1)
    {
        cout<<"-1";
    }
    else{
        stack<int> st;
        int tmp=se;
        while(tmp!=0)
        {
            st.push(tmp);
            tmp=vi[tmp];
        }
        while(st.size()!=0)
        {
            cout<<st.top()<<" ";
            st.pop();
        }
    }
    cout<<endl;
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(vi,-1,sizeof(vi));
        for(int i=0;i<1005;i++) vv[i].clear();
        cin>>v>>e>>fi>>ed;
        int x,y;
        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            vv[x].push_back(y);
        }
        findWay(vv,fi,ed);
    }
}