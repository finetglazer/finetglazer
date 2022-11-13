#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(ll a, ll b)
{
    return a > b;
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
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll b[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, cmp);
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=(a[i]*b[i]);
        }
        cout<<ans<<endl;
    }
}