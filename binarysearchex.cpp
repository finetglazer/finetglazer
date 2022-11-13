#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int l,int r,int x)
{
    while(l<=r)
    {
        
        int m=(l+r)/2;
        if(a[m]==x) l=m+1;
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return l;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    // for(int i=0;i<n;i++) cout<<a[i]<<" ";
    for(int j=0;j<m;j++) cin>>b[j];
    for(int i=0;i<m;i++)
    {
        cout<<binary_search(a,0,n-1,b[i])<<endl;
    }
}