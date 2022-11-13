#include<bits/stdc++.h>
using namespace std;
int rise(int a[10000],int l, int r)
{
    for(int i=l;i<r;i++)
    {
        if(a[i]>a[i+1]) return 0;
    }
    return 1;
}
int de(int a[10000], int l,int r)
{
    for(int i=1;i<r;i++)
    {
        if(a[i]<a[i+1]) return 0;
    }
    return 1;
}
int rs(int a[10000], int l, int r)
{
    int n=(l+r)/2;
    int ri=1;
    int d=1;
    for(int i=l;i<n;i++)
    {
        if(a[i]>a[i+1]) ri=0;
    }
    for(int i=n;i<r;i++)
    {
        if(a[i]<a[i+1]) d=0;
    }
    return ri&&d;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l,r;
        cin>>l>>r;
        if(rise(a,l,r) || de(a,l,r) || rs(a,l,r)) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
}
