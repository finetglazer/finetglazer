#include<bits/stdc++.h>
#define ll long long
using namespace std;
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
        int l=0;
        int r=1;
        ll cnt=0;
        sort(a,a+n);
            // while(l<n || r<n)
            // {
            //     if(a[r]-a[l]<k && l!=r)
            //     {
            //         cnt++;
            //         if(l>0) l--;
            //         else r++;
            //     } 
            //     else if(l==r) r++;
            //     else l++;
            // }
        for(int i=0;i<n-1;i++)
        {
            int p1=lower_bound(a+i+1,a+n,k+a[i])-a;
            cnt+=(p1-i-1);
        }
        cout<<cnt<<endl;
    }
}