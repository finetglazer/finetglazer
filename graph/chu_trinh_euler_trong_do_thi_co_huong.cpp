#include <bits/stdc++.h>
using namespace std;
void euler()
{
    int v, e;
    vector<int> vv[1005], vvv[1005];
    cin >> v >> e;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        vv[x].push_back(y);
        vvv[y].push_back(x);
    }
    bool d = 1;
    int in = 0, out = 0;
    // for (int i = 1; i <= v; i++)
    // {
    //     for (auto x : vvv[i])
    //         cout << x << " ";
    //     cout<<endl;
    // }
    for (int i = 1; i <= v; i++)
    {
        // vv[i]
        if (vv[i].size() != vvv[i].size())
            d = 0;
    }
    if(d) cout<<"1";
    else cout<<"0";
    cout<<endl;
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