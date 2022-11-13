#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int l,int r,int x)
{
    // end l=r
    if(l==r) 
    {
        if(a[l]==x)
            return l;
        else return -1;
    }
    int m=(l+r)/2;
    if(a[m]==x) return m;
    else if(a[m]<x) return binary_search(a,m+1,r,x);
    else return binary_search(a,l,m-1,x);
}
int binarysearch(int a[],int l,int r,int x)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x) return m;
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return -1;
}
int main()
{
    int n;cin>>n;
    int x;cin>>x;
    int a[n+5];
    for(int i=1;i<=n;i++)   cin>>a[i];
    cout<<binary_search(a,1,n,x);
}