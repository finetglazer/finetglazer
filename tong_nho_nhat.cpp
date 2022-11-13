#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll toNum(string s)
{
    ll res = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        res *= 10;
        res += (s[i] - '0');
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll ans = 0;
        sort(a + 1, a + n + 1);
        string s1="", s2="";
        for (ll i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
                s1 += (a[i] + '0');
            else
                s2 += (a[i] + '0');
        }
        ans = toNum(s1) + toNum(s2);
        cout << ans << endl;
    }
}