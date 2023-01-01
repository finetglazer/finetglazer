#include <bits/stdc++.h>
using namespace std;
struct edge
{
    int x, y, w;
};
int v, e;
int dis[1005];
vector<edge> vv;
void init()
{

    vv.clear();
    cin >> v >> e;
    for (int i = 1; i <= v; i++)
        dis[i] = 1e9;
    int x, y, w;
    edge tmp;
    for (int i = 0; i < e; i++)
    {
        cin >> tmp.x >> tmp.y >> tmp.w;
        vv.push_back(tmp);
    }
}
bool bellmanFord(int i)
{
    dis[i] = 0;
    for (int i = 1; i <= v - 1; i++)
    {
        for (auto j : vv)
        {
            int s1 = j.x, s2 = j.y, s3 = j.w;
            if (dis[s1] != 1e9 && dis[s2] > dis[s1] + s3)
            {
                dis[s2] = dis[s1] + s3;
            }
        }
    }
    bool d = true;
    for (auto j : vv)
    {
        int s1 = j.x, s2 = j.y, s3 = j.w;
        if (dis[s1] != 1e9 && dis[s2] > dis[s1] + s3)
        {
            dis[s2] = dis[s1] + s3;
            d = false;
            break;
        }
    }
    // for(int i=1;i<=v;i++) cout<<dis[i]<<" ";
    return d;
}
void cal()
{
    int check = 1;
    for (int i = 1; i <= v; i++)
    {
        if (dis[i] == 1e9 && bellmanFord(i) == false)
        {
            check = 0;
            break;
        }
    }
    if (check)
        cout << "0";
    else
        cout << "1";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        cal();
        cout << endl;
        /* code */
    }
}