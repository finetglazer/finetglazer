#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[m],b[n];
        int c[100005]={0};

        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            c[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=c[b[i]];j++)
            {
                cout<<b[i]<<" ";
            }
            c[b[i]]=0;
        }
        for(int i=1;i<=100000;i++)
        {
            for(int j=1;j<=c[i];j++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}