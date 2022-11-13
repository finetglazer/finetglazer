#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        priority_queue<ll> pq;
        cin >> k >> s;
        int f[30] = {};
        for(char &i : s) ++f[i - 'A'];// 'A' -'A' =0
        for(int i = 0; i < 26; ++i) if(f[i]) pq.push(f[i]);
        if (k > s.size())
            cout << "0";
        else
        {
            while (k--)
            {
                ll cur = pq.top();
                pq.pop();
                pq.push(cur - 1);
            }
            ll sum = 0;
            while (pq.size())
            {
                sum += (pq.top() * pq.top());
                pq.pop();
            }
            cout << sum;
            
        }
        cout << endl;
    }
}