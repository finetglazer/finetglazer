#include <bits/stdc++.h>
using namespace std;
int n, x, a[100];
vector<vector<int>> vv;
vector<int> v;
void cal(int pos, int sum)
{
    if (sum == x)
    {
        vv.push_back(v);
        return;
    }
    for (int j = pos; j <= n; j++)
    {
        if (a[j] + sum <= x)
        {
            v.push_back(a[j]);
            cal(j, sum + a[j]);
            v.pop_back();
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vv.clear();
        v.clear();
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        cal(1, 0);
        sort(vv.begin(), vv.end());
        for (auto &i : vv)
        {
            cout << "[";
            for (int j = 0; j < i.size(); j++)
            {
                if (j != i.size() - 1)
                    cout << i[j] << " ";
                else
                    cout << i[j];
            }
            cout << "]";
        }
        if(vv.size()==0) cout<<"-1";
        cout << endl;
    }
}