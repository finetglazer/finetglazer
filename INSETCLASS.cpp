#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in;
    in.open("DATA.in");
    int n,m;
    in>>n>>m;
    int a[10005],b[10005];
    for(int i=0;i<n;i++)
    {
        in>>a[i];
    }
    for(int j=0;j<m;j++)
    {
        in>>b[j];
    }
    set<int> ss;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j]) ss.insert(a[i]);
        }
    }
    for(int x: ss)
    {
        cout<<x<<" ";
    }
}