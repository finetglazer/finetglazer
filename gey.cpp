#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans=p;
    ans=min(p,a[0]);
    int check = ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
            ans--;
    }
    if (a[n - 1] != 0)
        ans--;
    
    if (ans != 0)
        cout << "ambiguous";
    else
    {
        cout << check << endl;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
                check--;
            cout << check << endl;
        }
    }
}