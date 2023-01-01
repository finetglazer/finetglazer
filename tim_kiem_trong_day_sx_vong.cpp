#include<bits/stdc++.h>
using namespace std;
int sbinary_search(int a[],int l,int r,int k)
{
    while(l<=r)
    {    
        int m=(l+r)/2;
        if(a[m]==k) return m;
        if(a[m]<k) return sbinary_search(a,m+1,r,k);
        if(a[m]>k) return sbinary_search(a,l,m-1,k);
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+5];
        a[0]=0;
        int m=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]<a[i-1]) m=i;
        } 
        // for(int i=1;i<m;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        if(sbinary_search(a,1,m-1,k)!=-1)    cout<<sbinary_search(a,1,m-1,k)<<endl;
        else cout<<sbinary_search(a,m,n,k)<<endl;
    }
}