#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll find(ll n, ll k)
{
    if (k % 2 == 1)
        return 1;
    ll x = pow(2, n - 1);
    if (k == x)
        return n;
    else if (k > x)
        return find(n - 1, k - x);
    else
       return  find(n - 1, k);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << find(n, k);
        cout << endl;
    }
}