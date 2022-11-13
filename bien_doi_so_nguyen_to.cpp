#include <bits/stdc++.h>
using namespace std;
int pr[10005];
void sangnt()
{
    for (int i = 0; i < 10005; i++)
        pr[i] = 1;
    pr[0] = 0;
    pr[1] = 0;
    for (int i = 2; i < 10005; i++)
    {
        for (int j = i * i; j < 10005; j += i)
        {
            pr[j] = 0;
        }
    }
}
int toNum(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res *= 10;
        res += (s[i] - '0');
    }
    return res;
}
int main()
{
    sangnt();
    int T;
    cin >> T;
    while (T--)
    {
        string s, t;
        cin >> s >> t;
        queue<pair<string, int>> qu;
        qu.push({s, 0});
        set<string> st;
        st.insert(s);
        while (1)
        {
            pair<string, int> cur = qu.front();
            qu.pop();
            if (cur.first == t)
            {
                cout << cur.second << endl;
                break;
            }
            for (int i = 0; i < 4; i++)
            {
                string tmp=cur.first;
                if (i == 0)
                {
                    for (int j = 1; j <= 9; j++)
                    {   
                        tmp[i] = (j + '0');
                        if (pr[toNum(tmp)] == 1 && st.count(tmp) == 0)
                        {
                            qu.push({tmp, cur.second + 1});
                            st.insert(tmp);
                        }
                    }
                }
                else
                {
                    for (int j = 0; j <= 9; j++)
                    {
                        tmp[i] = (j + '0');
                        if (pr[toNum(tmp)] == 1 && st.count(tmp) == 0)
                        {
                            qu.push({tmp, cur.second + 1});
                            st.insert(tmp);
                        }
                    }
                }
            }
        }
    }
}