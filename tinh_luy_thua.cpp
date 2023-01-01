#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
ll const mod = 1000000007;
ll binPow(ll a, ll b)
{
    if(!b) return 1;
    ll res = binPow(a, b >> 1);
    res = (res * res) % mod;
    if(b & 1) res = (res * a) % mod;
    return res;
}

int main()
{
   ll n, k;
    while(1)
    {
         faster();
         cin>>n>>k;
        if (n == 0 && k == 0)
            return 0;
        ll ans = binPow(n, k);
        ans %= mod;
        cout << binPow(n, k);
        cout << endl;
    }
}
