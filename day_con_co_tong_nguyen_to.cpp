#include<bits/stdc++.h>
using namespace std;
int n,a[105];
vector<vector<int>> vv;
vector<int> v;
bool cmp(int i,int j)
{
    return i>j;
}
bool check(int i)
{
    if(i==0 || i==1) return 0;
    if(i==2) return 1;
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0) return 0;
    }
    return 1;
}
void cal(int pos,int sum)
{
    if(check(sum)==1)
    {
        vv.push_back(v);
    }
    for(int j=pos;j<=n;j++)
    {
        v.push_back(a[j]);
        cal(j+1,sum+a[j]);
        v.pop_back();
    }
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        vv.clear();
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1,cmp);
        cal(1,0);
        sort(vv.begin(),vv.end());
        for(auto &i: vv)
        {
            for(auto & j: i)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }   
    }
}