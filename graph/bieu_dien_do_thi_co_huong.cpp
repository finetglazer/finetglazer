#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> vv[1005];
        int v,e;
        cin>>v>>e;
        int x,y;
        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            vv[x].push_back(y);
        }
        for(int i=1;i<=v;i++)
        {
            cout<<i<<": ";
            for(auto x:vv[i])
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}