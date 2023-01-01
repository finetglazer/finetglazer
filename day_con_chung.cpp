#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n + 5];
        ll b[m + 5];
        ll c[k + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= m; i++)
            cin >> b[i];
        for (ll i = 1; i <= k; i++)
            cin >> c[i];
        ll l1 = 1, l2 = 1, l3 = 1;
        ll r1 = n, r2 = m, r3 = k;
        vector<int> vv;
        while (l1 <= r1 && l2 <= r2 && l3 <= r3)
        {
            if (a[l1] == b[l2] && b[l2] == c[l3])
            {
                vv.push_back(a[l1]);
                l1++;
                l2++;
                l3++;
            }
            else if (a[l1] < b[l2])
                l1++;
            else if (b[l2] < c[l3])
                l2++;
            else
                l3++;
        }
        for (auto i : vv)
            cout << i << " ";
        if (vv.size() == 0)
            cout << "NO";
        cout << endl;
    }
}