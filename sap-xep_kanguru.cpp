#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vv(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vv[i];
        }
        sort(vv.begin(), vv.end());
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            a.push_back(vv[i]);
        }
        int x = vv[n - 1] / 2;
        int cnt = upper_bound(vv.begin(), vv.end(), x) - vv.begin();
        int st = 0;
        for (int i = cnt - 1; i >= 0; i--)
        {
            int index = lower_bound(a.begin(), a.end(), vv[i] * 2) - a.begin();
            if (index >= 0 && index < a.size())
            {
                // cout<<vv[i]<<" "<<a[index]<<endl;
                st++;
                a.erase(a.begin() + index);
            }
        }
        cout << n-st << endl;
    }
}