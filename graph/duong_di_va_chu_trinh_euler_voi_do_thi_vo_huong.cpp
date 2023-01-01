#include <bits/stdc++.h>
using namespace std;
void euler()
{
    int v, e;
    vector<int> vv[1005];
    cin >> v >> e;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
    int odd = 0, even = 0;
    for (int i = 1; i <= v; i++)
    {
        if (vv[i].size() % 2 == 0)
            even++;
        else
            odd++;
    }
    if (odd == 0)
    {
        cout << "2";
    }
    else
    {
        // 1 or 0
        if (odd ==2)
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        euler();
    }
}