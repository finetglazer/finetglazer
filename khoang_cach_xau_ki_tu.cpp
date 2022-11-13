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
        string s1, s2;
        cin >> s1 >> s2;
        set<string> st;
        string x;
        set<char> st1;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            for (int i = 0; i < x.size(); i++)
                st1.insert(x[i]);
            st.insert(x);
        }
        set<string> check;
        check.insert(s1);
        queue<pair<string, int>> qu;
        qu.push({s1, 1});
        pair<string, int> pr;
        while (qu.size() != 0)
        {
            pr = qu.front();
            qu.pop();
            if (pr.first == s2)
            {
                cout << pr.second << endl;
                break;
            }
            for (int i = 0; i < s1.size(); i++)
            {
                string tmp = pr.first;
                for (auto j : st1)
                {
                    tmp[i] = j;
                    if (st.count(tmp) && check.count(tmp) == 0)
                    {
                        qu.push({tmp, pr.second + 1});
                        check.insert(tmp);
                    }
                }
            }
        }
    }
}