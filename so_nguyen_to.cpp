#include <bits/stdc++.h>
using namespace std;
int n, s, p;
vector<string> vv;
int pr[205];
void ktao()
{
    for(int i=0;i<205;i++) pr[i]=1;
    // memset(pr,1,sizeof(pr));
    pr[0] = 0;
    pr[1] = 0;
    pr[2] = 1;
    for (int i = 2; i < 205; i++)
    {
        for (int j = i * i; j < 205; j+=i)
        {
            pr[j] = 0;
        }
    }
}
void nt(int cnt, int num, string res = "")
{
    if (cnt == n)
    {
        if (s == 0)
        {
            vv.push_back(res);
            return;
        }
        else
            return;
    }
    for (int i = num + 1; i <= s ; i++)
    {
        if (pr[i] == 1)
        {
            s-=i;
            nt(cnt + 1, i, res + to_string(i)+" ");
            s+=i;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    ktao();
    // for(int i=0;i<200;i++) cout<<pr[i]<<" ";
    while (t--)
    {
        vv.clear();
        cin >> n >> p >> s;
        string x="";
        nt(0, p,x);
        cout<<vv.size()<<endl;
        for(int i=0;i<vv.size();i++)
        {
            cout<<vv[i]<<endl;
        }
        // cout<<"1";
    }
}