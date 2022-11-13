#include <bits/stdc++.h>
using namespace std;
string lan1(string t1)
{
    swap(t1[1], t1[4]);
    swap(t1[2], t1[4]);
    swap(t1[4], t1[8]);
    swap(t1[6], t1[8]);
    swap(t1[8], t1[9]);
    return t1;
}
string lan2(string t2)
{
    swap(t2[0], t2[3]);
    swap(t2[1], t2[3]);
    swap(t2[3], t2[7]);
    swap(t2[5], t2[7]);
    swap(t2[7], t2[8]);
    return t2;
}
int main()
{
    int t;
    cin >> t;
    string an = "1238004765";
    while (t--)
    {
        string s1;
        int x;
        for (int i = 0; i < 10; i++)
        {
            cin >> x;
            s1 += (x + '0');
        }
        int ans=10000;
        queue<pair<string, int>> qu,q2;
        q2.push({an, 0});
        qu.push({s1, 0});
        unordered_map<string,int> um;
        while (qu.size()!=0)
        {
            pair<string, int> cur = qu.front();
            qu.pop();
            pair<string,int> t1 = {lan1(cur.first),cur.second+1};

            if (um[t1.first] ==0 )
            {
                qu.push(t1);
                um[t1.first]=t1.second;
            }
            pair<string,int> t2 = {lan2(cur.first),cur.second+1};

            if (um[t2.first] == 0 )
            {
                qu.push(t2);
                um[t2.first]=t2.second;
            }
            if(t1.second==14) break;
        }
         while (q2.size()!=0)
        {
            pair<string,int> top = q2.front();
            q2.pop();
            if (um[top.first])
                ans = min(ans, um[top.first] + top.second);
            pair<string, int> tmp = {lan1(top.first), top.second + 1};
            q2.push(tmp);
            tmp.first = lan2(top.first);
            q2.push(tmp);
            if (tmp.second == 14)
                break;
        }
        cout<<ans<<endl;
        // if(qu.size()==0) cout<<"0"<<endl;
    }
}