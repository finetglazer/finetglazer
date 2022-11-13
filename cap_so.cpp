#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ans = 0;
ll a[100005];
ll cp[100005];
vector<pair<ll, ll>> vv;
ll binarys(ll b[], ll val, ll l, ll r)
{
    for (ll i = l; i <= r; i++)
    {
        if (b[i] == val)
            return i;
    }
    return -1;
}
bool check2(ll b[], ll i, ll j)
{
    for (ll tmp = i; tmp <= j; tmp++)
    {
        if (b[tmp] % 2 == 1)
            return true;
    }
    return false;
}
void merge(ll b[], ll l, ll m, ll r)
{
    vector<ll> v1, v2;
    for (ll i = l; i <= m; i++)
        v1.push_back(b[i]);
    for (ll i = m + 1; i <= r; i++)
        v2.push_back(a[i]);
    ll i = l;
    ll i1 = 0;
    ll i2 = 0;

    while (i1 < v1.size() && i2 < v2.size())
    {
        if (v1[i1] > v2[i2])
        {
            b[i] = v2[i2];
            if (v2[i2] % 2 == 0)
                for (ll tmp = i1; tmp < v1.size(); tmp++)
                {
                    if (v1[tmp] % 2 == 0)
                        vv.push_back({v1[tmp], v2[i2]});
                }
            i++;
            i2++;
        }
        else
        {
            b[i] = v1[i1];
            i++;
            i1++;
        }
    }
    while (i1 < v1.size())
    {
        b[i] = v1[i1];
        i++;
        i1++;
    }
    while (i2 < v2.size())
    {
        b[i] = v2[i2];
        i++;
        i2++;
    }
}
void merge_sort(ll b[], ll l, ll r)
{
    if (l == r)
        return;
    ll m = (l + r) / 2;
    merge_sort(b, l, m);
    merge_sort(b, m + 1, r);
    merge(b, l, m, r);
}
int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        cp[i] = a[i];
    }
    merge_sort(a, 1, n);
    // for (ll i = 1; i <= n; i++)
    //     cout << a[i] << " ";
    for (ll i = 0; i < vv.size(); i++)
    {
        ll id1 = binarys(cp, vv[i].first, 1, n);
        ll id2 = binarys(cp, vv[i].second, 1, n);
        if (check2(cp, id1, id2) == true)
            ans++;
    }
    cout << ans;
}