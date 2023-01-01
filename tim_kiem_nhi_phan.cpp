#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int k,int l,int r)
{
    if(l>r) return -1;
    int mid=(r+l)/2;
    if(k==a[mid]) return mid;
    else if(k<a[mid]) return bs(a,k,l,mid-1);
    else return bs(a,k,mid+1,r);
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
        for(int i=1;i<=n;i++) cin>>a[i];
        int ans=bs(a,k,1,n);
        if(ans==-1) cout<<"NO";
        else cout<<ans;
        cout<<endl;
    }
}