#include<bits/stdc++.h>
using namespace std;
int sbinary_search(int a[],int l,int r,int k)
{
    while(l<=r)
    {    
        int m=(l+r)/2;
        if(a[m]==k) return 1;
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
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<sbinary_search(a,0,n-1,k)<<endl;
    }
}