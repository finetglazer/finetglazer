#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll qt[q + 5];
        for (ll i = 1; i <= q; i++)
            cin >> qt[i];
        vector<ll> vv;
        for (ll i = 1; i <= q; i++)
        {
            ll id = 0;
            bool d = true;
            for (int j = 1; j <= n; j++)
            {
                id = j;
                if (a[j] > qt[i])
                {
                    d = false;
                    break;
                    
                }
            }
            ll sum = 0;
            if (d == false)
            {
                for (int j = 1; j < id; j++)
                {
                    sum += a[j];
                }
            }
            else
            {
                for (int j = 1; j <= id; j++)
                {
                    sum += a[j];
                }
            }
            vv.push_back(sum);
        }
        for (int i = 0; i < vv.size(); i++)
        {
            cout << vv[i] << " ";
        }
        cout << endl;
    }
}