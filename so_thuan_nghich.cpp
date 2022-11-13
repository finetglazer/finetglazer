#include<bits/stdc++.h>
using namespace std;
struct ao
{
    string x;
    int y;
};
int check(string a)
{
    int n=a.size();
    if(n==1) return 0;
    for(int i=0;i<a.size()/2;i++)
    {
        if(a[i]!=a[n-i-1]) return 0;
    }
    return 1;
}
bool cmp(ao a,ao b)
{
    if(a.x.size()==b.x.size()) return a.x>b.x;
    return a.x.size()>b.x.size();
}
int main()
{
    vector<ao> vv;
    string a;
    while(cin>>a)
    {
        if(check(a))
        {
            int d=true;
            int k=-1;
            for(int i=0;i<vv.size();i++)
            {
                if(a==vv[i].x)
                {
                    k=i;
                    d=false;
                    break;
                }
            }
            if(d)
            {
                ao c;
                c.x=a;
                c.y=1;
                vv.push_back(c);
            }
            else vv[k].y++;
        }
    }
    sort(vv.begin(),vv.end(),cmp);
    for(int i=0;i<vv.size();i--) cout<<vv[i].x<<" "<<vv[i].y<<endl;
}