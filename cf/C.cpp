#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(ll a[], ll l, ll r)
{
    ll sum = 0;
    for (ll i = l; i <= r; i++)
    {
        sum += a[i];
    }
    return sum;
}

ll n, a[2002];
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll tmp = 0;
        cin >> n;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll tong = sum(a, 1, n);
        // cout<<tong<<endl;
        vector<ll> uoc;
        for (ll i = 1; i < sqrt(tong); i++)
        {
            if (tong % i == 0)
            {
                uoc.push_back(tong / i);
                uoc.push_back(i);
            }
        }
        ll k = sqrt(tong);
        ll res = n;
        if (k * k == tong)
            uoc.push_back(k);
        ll ans = -1;
        bool ck = 0;
        if (uoc.size() == 2)
            res = n;
        else
        {
            for (auto i : uoc)
            {
                if (i != 1 && i != tong)
                {
                    ll x = tong / i;
                    ll l, r;
                    l = 1;
                    r = 1;
                    bool d = true;
                    tmp = ans;
                    while (r < n)
                    {
                        if (sum(a, l, r) < x)
                            r++;
                        else if (sum(a, l, r) == x)
                        {
                            ans = max(ans, r - l + 1);
                            l = r + 1;
                            r += 1;
                        }
                        else
                        {
                            d = false;
                            break;
                        }
                    }
                    if (d == false)
                    {
                        ans = tmp;
                    }
                    if (ans >= 0)
                        res = min(ans, res);
                }
                // cout << i << " ";
            }
        }
        cout << res << endl;
    }
}