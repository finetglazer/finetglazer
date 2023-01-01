#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, p;
    cin >> n >> p;
    long long a[n + 5];
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    long long ans = p;
    long long check = ans;
    for (long long i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
            ans--;
    }
    if (a[n - 1] != 0)
        ans--;

    if (ans != 0 && a[0] != 0)
        cout << "ambiguous" << endl;
    else if (a[0] == 0)
    {
        for (long long i = 0; i < n; i++)
        {
            cout << "0" << endl;
        }
    }
        else
        {
            cout << check << endl;
            for (long long i = 1; i < n; i++)
            {
                if (a[i] < a[i - 1])
                    check--;
                cout << check << endl;
            }
        }
    }