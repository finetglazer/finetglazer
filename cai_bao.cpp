#include <bits/stdc++.h>
using namespace std;
int n, M;
int tgt = 0;
int MAX = 0;
int m[100];
int val[100];
int x[100];
vector<double> vv;
void sort()
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1 + i; j <= n; j++)
        {
            if ((double)val[i] / m[i] < (double)val[j] / m[j])
            {
                swap(m[i], m[j]);
                swap(val[i], val[j]);
            }
        }
    }
}
// tong gia tri / con lai / can tren
void Try(int i)
{
    for (int j = 1; j >= 0; j--)
    {
        x[i] = j;
        tgt += x[i] * val[i];
        M -= x[i] * m[i];
        // cout<<tgt<<" "<<M<<endl;
        if (i == n)
        {
            if (M >= 0 && MAX < tgt)
                MAX = tgt;
        }
        else if ((double)(tgt + (double)((val[i + 1] * M) / m[i + 1])) > MAX)
        {

            Try(i + 1);
        }
        tgt -= x[i] * val[i];
        M += x[i] * m[i];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> M;
        for (int i = 1; i <= n; i++)
        {
            cin >> m[i] >> val[i];
        }
        sort();
        // for(int i=1;i<=n;i++) cout<<m[i]<<" "<<val[i]<<endl;
        Try(1);
        cout << MAX<<endl;
    }
}
