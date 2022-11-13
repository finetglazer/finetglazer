#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;

int cal(int n)
{
    unordered_map<int,int> um;
    queue<pair<int,int>> qu;
    um[n] = 1;
    qu.push({n, 0});
    while (qu.size()!=0)
    {
        pair<int,int> cur = qu.front();
        qu.pop();
        if (cur.first == 1)
        {
            return cur.second;
        }
        for (int i = 2; i <= sqrt(cur.first); i++)
        {
            if (cur.first % i == 0)
            {
                int x = max(i , cur.first / i);
                if (um[x] == 0)
                {
                    qu.push({x, cur.second + 1});
                    um[x] = 1;
                }
            }
        }
        if (um[cur.first - 1] == 0)
        {
            um[cur.first - 1] = 1;
            qu.push({cur.first - 1, cur.second + 1});
        }
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << cal(n) << "\n";
    }
}