#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int v,e;
        cin>>v>>e;
        int k=(v*v-1)/2;
        vector<int> vv[k+5];
        int x,y;
        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        for(int i=1;i<=v;i++)
        {
            cout<<i<<": ";
            for(auto j:vv[i])
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
}