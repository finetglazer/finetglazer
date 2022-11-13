#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<pair<int, int>> vv(50);
    cin >> s;
    stack<int> st;
    int sz = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else if (s[i] == ')')
        {
            sz++;
            vv[sz] = make_pair(st.top(), i);
            st.pop();
        }
    }
    // for (int i = 1; i <= sz; i++)
    //     cout << vv[i].first << " " << vv[i].second << endl;
    set<string> v;
    // sinh np 111 000
    int a[sz + 5];
    for (int i = 1; i <= sz; i++)
        a[i] = 0;
    // cout<<sz;
    while (1)
    {
        int i = sz;
        while (i >= 1 && a[i] == 1) i--;
        if (i == 0) break;
        else
        {
            a[i] = 1;
            for (int j = i + 1; j <= sz; j++)
                a[j] = 0;
            vector<int> vl;
            for (int j = 1; j <= sz; j++)
            {
                if (a[j] == 1)
                {
                    vl.push_back(vv[j].first);
                    vl.push_back(vv[j].second);
                }
            }
            // for(int l=0;l<vl.size();l++) cout<<vl[l]<<" ";
            string temp = "";
            for (int k = 0; k < s.size(); k++)
            {
                vector<int>::iterator x;
                x = find(vl.begin(), vl.end(), k);
                if (x == vl.end())
                {
                    temp += s[k];
                }
            }
            v.insert(temp);
        }
    }
    for (auto l : v)
    {
        cout << l << endl;
    }
}