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
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        int min;
        int ans1 = 0;
        int ans2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (cnt == 2)
                break;
            min = i;
            for (int j = i + 1; j <= n; j++)
            {
                if (a[min] > a[j])
                {
                    min = j;
                    cnt++;
                }
                
            }
            swap(a[min], a[i]);
        }
        if (cnt == 0)
            cout << "-1";
        else
        {
            cout << a[1] << " " << a[2];
        }
        cout<<endl;
    }
}