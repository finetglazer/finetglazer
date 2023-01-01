#include <bits/stdc++.h>
using namespace std;
int a[105], n, s;
vector<string> vv;
void cal(int s, int pos, string tmp = "")
{
    if (s == 0)
    {

        vv.push_back(tmp);
    }
    for (int j = pos; j <= n; j++)
    {
        if (s - a[j] >= 0)
        {
            if (s - a[j] == 0)
                cal(s - a[j], j, tmp + to_string(a[j]));
            else
                cal(s - a[j], j, tmp + to_string(a[j]) + " ");
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
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        cal(s, 1);
        if (vv.size() == 0)
            cout << "-1";
        else
        {
            cout << vv.size() << " ";
            for (int i = 0; i < vv.size(); i++)
            {

                cout << "{" << vv[i] << "} ";
            }
        }

        cout << endl;
    }
}