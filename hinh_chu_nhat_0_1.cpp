#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll N, M;
        cin >> N >> M;
        ll a[N + 5][M + 5];
        for (int i = 0; i < N; i++)
        {
            for (ll j = 0; j < M; j++)
            {
                cin >> a[i][j];
            }
        }
        for (ll i = 1; i < N; i++)
        {
            for (ll j = 0; j < M; j++)
            {
                if (a[i - 1][j] != 0 && a[i][j] != 0)
                    a[i][j] = a[i - 1][j] + 1;
            }
        }
        ll n;
        n = M;
        ll b[n + 5];
        ll superans=0;
        for (int k = 0; k < N; k++)
        {
            for (ll j = 0; j < n; j++)
                b[j] = a[k][j];

            ll i = 1;
            stack<ll> st;
            st.push(0);
            ll ans = 0;
            while (i < n)
            {
                if (b[i] < b[st.top()])
                {
                    ll cur = st.top();
                    st.pop();
                    if (st.size() == 0)
                    {
                        // i * a[cur]
                        ans = max(ans, b[cur] * i);
                        st.push(i);
                        i++;
                    }
                    else
                    {
                        ans = max((i - st.top() - 1) * b[cur], ans);
                    }
                }
                else
                {
                    st.push(i);
                    i++;
                }
            }
            while (st.size())
            {
                ll cur = st.top();
                st.pop();
                if (st.size() == 0)
                {
                    // i * a[cur]
                    ans = max(ans, b[cur] * i);
                }
                else
                {
                    ans = max((i - st.top() - 1) * b[cur], ans);
                }
            }
            superans=max(ans,superans);
        }
        cout<<superans<<endl;
    }
}