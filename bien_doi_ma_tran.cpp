#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n][n];
        int h[n]={0};
        int c[n]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                h[i]+=a[i][j];
                c[j]+=a[i][j];
            }
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(max<h[i]) max=h[i];
            if(max<c[i]) max=c[i];
        }
        int i=0,j=0;
        int dreamer=0;
        while(i<n && j<n)
        {
            int x;
            int del=(max-h[i])-(max-c[j]);// h[i] < c[i] thi tang c[i]
            if(del>0) x=max-c[j];
            else x=max-h[i];
            a[i][j]+=x;
            h[i]+=x;
            c[j]+=x;
            if(h[i]==max) i++;
            if(c[j]==max) j++;
            dreamer+=x;
        }
        cout<<dreamer;
        cout<<endl;
    }
}