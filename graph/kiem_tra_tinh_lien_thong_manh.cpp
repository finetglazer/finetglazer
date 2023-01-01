#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<int> lst[1005];
vector<int> T_lst[1005];
bool vi[1005];
stack<int> st;
int cnt = 0;
void nhap()
{  
    cnt=0;
    memset(vi, false, sizeof(vi));
    for (int i = 0; i < 1005; i++)
    {
        lst[i].clear();
        T_lst[i].clear();
    }
    cin >> v >> e;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        lst[x].push_back(y);
        T_lst[y].push_back(x);
    }
}
void dfs1(int i)
{
    vi[i] = true;
    for (auto x : lst[i])
    {
        if (vi[x] == false)
        {
            dfs1(x);
        }
    }
    st.push(i);
}
void dfs2(int i)
{
    vi[i] = true;
    for (auto x : T_lst[i])
    {
        if (vi[x] == false)
            dfs2(x);
    }
}
bool koraju()
{
    memset(vi, false, sizeof(vi));
    int cur;
    while (st.size() != 0)
    {
        cur = st.top();
        st.pop();
        if (vi[cur] == false)
        { 
            cnt++;
            dfs2(cur);
        }
    }
    if(cnt==1) return true;
    else return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        for (int i = 1; i <= v; i++)
        {
            if (vi[i] == false)
                dfs1(i);
        }
        if(koraju()) cout<<"YES";
        else cout<<"NO";
        cout << endl;
    }
}