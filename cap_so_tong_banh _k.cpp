#include<bits/stdc++.h>
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
        long long cnt=0;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            int x=k-a[i];
            auto idx=lower_bound(a+i+1,a+n,x);
            auto index=upper_bound(a+i+1,a+n,x);
            cnt+=(index-idx);
        }
        cout<<cnt;
        cout<<endl;
    }
}