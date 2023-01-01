#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll fi(ll n)
{
    ll x = 2;
    while (n % x != 0)
    {
        x++;
    }
    return x;
}
int main()
{
    ll n;
    cin >> n;
    // n-
    ll a = n;
    ll cnt = 0;
    vector<ll> vv;
    bool d = true;
    while (n > 1)
    {
        ll tmp = fi(n);
        vv.push_back(tmp);
        n /= tmp;
        n -= 1;
        cnt++;
    }
    if (vv.size() != 0)
    {
        cout << vv.size();

        cout << endl;
        for (ll i = 0; i < vv.size(); i++)
            cout << vv[i] << " ";
    }
}