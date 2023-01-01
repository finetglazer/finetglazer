#include<bits/stdc++.h>
using namespace std;
vector<int> vv[1005];
int from[1005];
int v,e,fi,ed;
void dfs(int i)
{
    for(auto x:vv[i])
    {
        if(from[x]==-1)
        {
            from[x]=i;
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
        memset(from,-1,sizeof(from));
        cin>>v>>e>>fi>>ed;
        int x,y;
        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            vv[x].push_back(y);
        }
        from[fi]=0;
        dfs(fi);
        if(from[ed]==-1) cout<<"-1";
        else{
            stack<int> st;
            int tmp=ed;
            while (tmp!=0)
            {
                st.push(tmp);
                tmp=from[tmp];
                /* code */
            }
            while(st.size()!=0)
            {
                cout<<st.top()<<" ";
                st.pop();
            }
            
        }
        cout<<endl;
    }
}