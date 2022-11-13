#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
int check[100];
int x, cnt;
void ktao()
{
    for (int i = 0; i < 100; i++)
        check[i] = 0;
}
void cal(int pos,int sum)
{
    if (sum == x)
    {
        cnt++;
        sum = 0;
        pos=1;
    }
    for (int j = pos; j <= n; j++)
    {
        if (check[j] == 0 && sum + a[j] <= x)
        {
            check[j] = 1;
            cal(j+1,sum + a[j]);
            check[j] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ktao();
        cnt = 0;x=0;
        cin >> n >> k;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            x += a[i];
        }
        if (x % k == 0)
        {
            x /= k;
            cal(1,0);
            cout << cnt;
            if (cnt == k)
                cout<<"1";
            else
                cout << "0";
        }
        else
            cout << "0";

        // cout<<x<<endl;

        cout << endl;
    }
}