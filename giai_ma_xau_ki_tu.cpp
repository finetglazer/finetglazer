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
    string s;
    while (t--)
    {
        cin >> s;
        stack<char> st;
        string tmp, num;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ']')
            {
                tmp = "";
                while (st.size() && st.top() != '[')
                {
                    tmp = st.top()+tmp;
                    st.pop();
                }
                if (st.size())
                    st.pop();
                num = "";
                while (st.size() && st.top() >= '0' && st.top() <= '9')
                {
                    num = st.top() + num;
                    st.pop();
                }
                if (num == "")
                    num = "1";
                int lap = toNum(num) - 1;
                string k = tmp;
                while (lap--)
                {
                    tmp += k;
                }
                // cout<<tmp<<endl;
                for (int i = 0; i < tmp.size(); i++)
                    st.push(tmp[i]);
            }
            else
            {
                st.push(s[i]);
            }
        }
        string ans = "";
        while (st.size())
        {
            ans =  st.top()+ans ;
            st.pop();
        }
        cout<<ans;
        cout << endl;
    }
}