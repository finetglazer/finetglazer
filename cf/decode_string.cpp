#include <bits/stdc++.h>
using namespace std;
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> vv;
        int j = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!='0')
            {
                vv.push_back(s[i]-'0');
            }
            else
            {
                string tmp="";
                tmp+=s[i-2];
                tmp+=s[i-1];
                vv.push_back(toNum(tmp));
                i-=2;
            }
        }
        string asc="0abcdefghijklmnopqrstuvwxyz";
        for(int i=vv.size()-1;i>=0;i--)
        {
            cout<<asc[vv[i]];
        }
        cout<<endl;
    }
}