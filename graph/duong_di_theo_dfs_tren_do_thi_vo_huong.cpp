#include <bits/stdc++.h>
using namespace std;
vector<int> vv[1005];
int pre[1005];
int be, ed;
bool d;
vector<int> ans;
void dfs(int i)
{
    if (d)
    {
        if (i == ed)
        {
            d = false;
            return;
        }

        for (auto j : vv[i])
        {
            if (pre[j] == -1)
            {
                pre[j] = i;
                dfs(j);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans.clear();
        d = true;
        for (int i = 0; i < 1005; i++)
            pre[i] = -1;
        for (int i = 0; i < 1005; i++)
            vv[i].clear();
        int v, e;
        cin >> v >> e;
        int x, y;
        cin >> be >> ed;
        pre[be] = 0;
        for (int i = 0; i < e; i++)
        {
            cin >> x >> y;
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        dfs(be);
        if(d) cout<<"-1";
        else{
            int tmp=ed;
            stack<int> st;
            while(tmp!=be)
            {
                st.push(tmp);
                tmp=pre[tmp];
            }
            st.push(be);
            while(st.size()!=0)
            {
                cout<<st.top()<<" ";
                st.pop();
            }
        }
        cout << endl;
        /* code */
    }
}