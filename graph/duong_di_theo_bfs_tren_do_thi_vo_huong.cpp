#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, x1, x2;
        cin >> v >> e >> x1 >> x2;
        int pre[v + 5];
        for (int i = 0; i < v + 5; i++)
            pre[i] = -1;
        vector<int> vv[e + 5];
        int x, y;
        for (int i = 0; i < e; i++)
        {
            cin >> x >> y;
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        queue<int> qu;
        qu.push(x1);
        pre[x1] = 0;
        int cur;
        bool d = true;
        while (qu.size() != 0)
        {
            cur = qu.front();
            qu.pop();
            for (auto i : vv[cur])
            {
                if (pre[i] == -1)
                {
                    pre[i] = cur;
                    qu.push(i);
                }
                if (i == x2)
                    d = false;
            }
            if (d == false)
                break;
        }
        if (d)
            cout << "-1" << endl;
        else
        {
            int tmp = x2;
            stack<int> st;
            while (tmp != 0)
            {
                st.push(tmp);
                tmp = pre[tmp];
            }
            while (st.size() != 0)
            {
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;
        }

        /* code */
    }
}