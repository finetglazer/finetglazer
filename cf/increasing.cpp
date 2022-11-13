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
        bool d = true;
        set<int> st;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            if (st.count(a[i]) != 0)
            {
                d = false;
                break;
            }
            st.insert(a[i]);
        }
        if (d)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}