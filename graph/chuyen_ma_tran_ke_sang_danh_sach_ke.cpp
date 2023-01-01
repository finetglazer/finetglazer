#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    cin>>v;
    int a[v+5][v+5];
    for(int i=1;i<=v;i++)
        for(int j=1;j<=v;j++)
            cin>>a[i][j];
    vector<int> vv[v+5];
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            if(a[i][j]==1)
            {
                vv[i].push_back(j);
            }
        }
    }
    for(int i=1;i<=v;i++)
    {
        for(auto j:vv[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}