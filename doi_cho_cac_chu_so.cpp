#include <bits/stdc++.h>
using namespace std;
int n;
string s, ans;
int sz;
int tonum(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res *= 10;
        res += (s[i] - '0');
    }
    return res;
}
void doi(string &ans, int pos)
{
    if(n==0) return;
    char tmp = s[pos];
    for (int j = pos; j < s.size(); j++)
    {
        if (s[j] > tmp)
        {
            tmp = s[j];
        }
    }
    if (tmp != s[pos]) n--;
    for (int j = s.size() - 1; j >= pos; j--)
    {
        if (tmp == s[j])
        {
            swap(s[j], s[pos]);
            if(tonum(ans)<tonum(s)) ans=s;
            doi(ans , pos + 1);
            swap(s[j], s[pos]);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        ans = s;
        doi(ans, 0);
        cout << ans << endl;
    }
}
