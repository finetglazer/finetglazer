#include <bits/stdc++.h>
using namespace std;
int sum(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)
        res += (s[i] - '0');
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
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        string s = "";
        string tmp = "";
        for (int i = 0; i < n; i++)
        {
            tmp = (a[i] + '0');
            s = tmp + s;
        }
        queue<string> qu;
        string tp="";
        qu.push(s);
        while(qu.size()!=0)
        {
            string cur=qu.front();
            if(sum(cur)%3==0 && sum(cur)!=0)
            {
                cout<<cur<<endl;
                break;
            }
            qu.pop();
            if(cur.size()>1)
            {
            
                for(int i=cur.size()-1;i>=0;i--)
                {
                    tp=cur;
                    tp.erase(tp.begin()+i);
                    qu.push(tp);
                }
            }
        }
        if(qu.size()==0) cout<<"-1"<<endl;
    }
}

