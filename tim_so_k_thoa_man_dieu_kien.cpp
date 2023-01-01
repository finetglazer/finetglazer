#include <bits/stdc++.h>
using namespace std;
queue<int> qu;
vector<int> vv;
int check(int i, int a)
{
    while (a != 0)
    {
        if (a % 10 == i)
            return 0;
        a /= 10;
    }
    return 1;
}
void ktao()
{

    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);

    vv.push_back(0);
    vv.push_back(1);
    vv.push_back(2);
    vv.push_back(3);
    vv.push_back(4);
    vv.push_back(5);
    while (1)
    {
        int cur = qu.front();
        qu.pop();
        if (cur > 100005)
            break;
        for (int i = 0; i <= 5; i++)
        {
            if (check(i, cur))
            {
                qu.push(cur * 10 + i);
                vv.push_back(cur * 10 + i);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    ktao();
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans=0;
        for(int i=0;i<1031;i++)
        {
            if(vv[i]>=n && vv[i]<=m)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}