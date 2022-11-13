#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n + 5];
        ll sum1 = 0;
        ll sum2 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]>=0) sum1+=a[i];
            else sum2+=a[i];
        }
        cout<<abs(abs(sum1)-abs(sum2));
        cout<<endl;
    }
}