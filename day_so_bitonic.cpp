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
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int rise[n + 5];
        memset(rise, 0, sizeof(rise));
        int down[n + 5];
        memset(down, 0, sizeof(down));
        for (int i = 0; i < n; i++)
        {
            rise[i] = a[i];
            for (int j = 0; j < i; j++)
                if (a[j] < a[i])
                    rise[i] = max(rise[i], a[i] + rise[j]);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            down[i] = a[i];
            for (int j = n - 1; j > i; j--)
                if (a[j] < a[i])
                    down[i] = max(down[i], a[i] + down[j]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, rise[i] + down[i] - a[i]);
        }
        cout << ans << endl;
    }
}