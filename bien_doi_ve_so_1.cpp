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
        queue<pair<int, int>> qu;
        qu.push({n, 0});
        pair<int, int> cur;
        int ans = 0;
        while (qu.size() != 0)
        {
            cur = qu.front();
            qu.pop();
            if (cur.first == 1)
            {
                ans = cur.second;
                break;
            }
            if (cur.first % 2 == 0)
                qu.push({cur.first / 2, cur.second + 1});
            if (cur.first % 3 == 0)
                qu.push({cur.first / 3, cur.second + 1});
            qu.push({cur.first - 1, cur.second + 1});
        }
        cout << ans << endl;
    }
}