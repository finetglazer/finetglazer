#include<bits/stdc++.h>
using namespace std;
int parent[1005];
vector<int> vv[1005];
int v,e;
vector<int> ans;
void nhap()
{
    ans.clear();
    ans.push_back(1);
    memset(parent,-1,sizeof(parent));
    for(int i=0;i<1005;i++)
        vv[i].clear();
    cin>>v>>e;
    int x,y;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
}
bool checkWaybybfs(int i)
{
    queue<int> qu;
    qu.push(i);
    parent[i]=0;
    int cur;
    while(qu.size()!=0)
    {
        cur=qu.front();
        ans.push_back(cur);
        qu.pop();
        for(auto x:vv[cur])
        {
            if(parent[x]==-1)
            {
                qu.push(x);
                parent[x]=cur;
            }
            else if(x!=parent[cur])
            {
                ans.push_back(x);
                return true;
            }
                
        }
    }
    return false;
}
bool checkWaybydfs(int i,int par)
{
    parent[i]=par;
    for(auto x:vv[i])
    {
        if(parent[x]==-1)
        {
            ans.push_back(x);
            if(checkWaybydfs(x,i))
                return true;
        }
        else if(x!=par)
        {
            ans.push_back(x);
            return true;
        } 
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        // froom[1] = 0;
        bool d = true;
        for (int i = 1; i <= v; i++)
        {
            if (parent[i] == -1)
            {
                parent[i] = 0;
                if (checkWaybydfs(i,0) == 1)
                {
                    for(auto x:ans)
                    {
                        cout<<x<<" ";
                    }
                    d = false;
                    break;
                }
            }
            break;
        }
        if (d )
            cout << "NO";
        cout << endl;
    }
}