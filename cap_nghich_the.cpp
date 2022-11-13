#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ans = 0;
void merge(ll a[], ll l, ll m, ll r)
{
    vector<ll> v1, v2;
    for (ll i = l; i <= m; i++)
        v1.push_back(a[i]);
    for (ll i = m + 1; i <= r; i++)
        v2.push_back(a[i]);
    ll i = l;
    ll i1 = 0;
    ll i2 = 0;
    
    while (i1 < v1.size() && i2 < v2.size())
    {
        if (v1[i1] > v2[i2])
        {
            a[i] = v2[i2];
            i++;
            i2++;
            ans+=(v1.size()-i1);
            
        }
        else
        {
            a[i] = v1[i1];
            i++;
            i1++;
        }
    }
    while (i1 < v1.size())
    {
        a[i] = v1[i1];
        i++;
        i1++;
    }
    while (i2 < v2.size())
    {
        a[i] = v2[i2];
        i++;
        i2++;
    }
}
void merge_sort(ll a[], ll l, ll r)
{
    if (l == r)
        return;
    ll m = (l + r) / 2;
    merge_sort(a, l, m);
    merge_sort(a, m + 1, r);
    merge(a, l, m, r);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ans = 0;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        merge_sort(a, 1, n);
        // for (ll i = 1; i <= n; i++)
        //     cout << a[i] << " ";
        cout<<ans;
        cout << endl;
    }
}