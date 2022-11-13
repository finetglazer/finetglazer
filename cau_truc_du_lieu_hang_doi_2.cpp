#include <bits/stdc++.h>
using namespace std;
int toNum(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans *= 10;
        ans += (s[i] - '0');
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    string s;
    cin.ignore();
    queue<int> qu;
    while (t--)
    {
        getline(cin, s);
        vector<string> vv;
        stringstream ss(s);
        string tok;
        while (ss >> tok)
        {
            vv.push_back(tok);
        }
        if (vv[0] == "PUSH")
        {
            qu.push(toNum(vv[1]));
        }
        else if (vv[0] == "POP")
        {
            if (qu.size() != 0)
            {
                qu.pop();
            }
        }
        else
        {
            if (qu.size() != 0)
            {
                cout << qu.front()<<endl;
            }
            else
            {
                cout << "NONE" << endl;
            }
        }
    }
}