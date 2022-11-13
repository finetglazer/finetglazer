#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int b[n + 5];
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        b[a[i]] = j;
        j++;
    }
    vector<int> vv;
    for (int i = 1; i <= n; i++)
        vv.push_back(b[i]);
    // for(auto & i: vv) cout<<i<<" ";
    int ans = 0;
    for (int i = 0; i < vv.size()-1; i++)
    {
        if (vv[i + 1] > vv[i])
        {
            int cnt = 1;
            while (vv[i + 1] > vv[i])
            {
                cnt++;
                i++;
            }
            i--;
            ans = max(ans, cnt);
        }
    }
    cout << n-ans;
}