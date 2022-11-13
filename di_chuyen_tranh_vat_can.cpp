#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5][n + 5];
        int checka[n+5][n+5];
        char x;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> x;
                if (x == 'X')
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
            }
        int h1, c1, h2, c2;
        cin >> h1 >> c1 >> h2 >> c2;
        queue<pair<pair<int, int>, int>> qu;
        set<pair<int, int>> st;
        st.insert({h1, c1});
        qu.push({{h1, c1}, 0});
        pair<pair<int, int>, int> cur;
        if (h1 == h2 && c1 == c2)
            cout << "0" << endl;
        else
        {
            bool d=true;
            while (qu.size() != 0)
            {
                cur = qu.front();
                qu.pop();
                if (cur.first.first == h2 && cur.first.second == c2)
                {
                    cout << cur.second << endl;
                    
                    d=false;break;
                }
                for (int i = cur.first.second; i >=0 ; i--)
                {
                    if (st.count({cur.first.first, i}) == 0 && a[cur.first.first][i] == 0)
                    {
                        qu.push({{cur.first.first, i}, cur.second + 1});
                        st.insert({cur.first.first, i});
                    }
                    if (a[cur.first.first][i] == 1 )
                        break;
                }
                for (int i = cur.first.second; i < n; i++)
                {
                    if (st.count({cur.first.first, i}) == 0 && a[cur.first.first][i] == 0)
                    {
                        qu.push({{cur.first.first, i}, cur.second + 1});
                        st.insert({cur.first.first, i});
                    }
                    if (a[cur.first.first][i] == 1 )
                        break;
                }
                for (int i = cur.first.first; i >=0 ; i--)
                {
                    if (st.count({i, cur.first.second}) == 0 && a[i][cur.first.second] == 0)
                    {
                        qu.push({{i, cur.first.second}, cur.second + 1});
                        st.insert({i, cur.first.second});
                    }
                    if (a[i][cur.first.second] == 1 )
                        break;
                }
                for (int i = cur.first.first; i < n; i++)
                {
                    if (st.count({i, cur.first.second}) == 0 && a[i][cur.first.second] == 0)
                    {
                        qu.push({{i, cur.first.second}, cur.second + 1});
                        st.insert({i, cur.first.second});
                    }
                    if (a[i][cur.first.second] == 1 )
                        break;
                }
            }
            if (qu.size() == 0 && d==true)
                cout << "-1" << endl;
        }
    }
}