#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int x;
        int k;
        cin>>k>>x;
        int m=lower_bound(a.begin(),a.end(),x)-a.begin();// tim vt ma gan (>=x) nhat trong mang
        int l=m,r=m;
        if(a[m]==x)
        {
            l--;
            r++;
        }
        else{
            // 1 2 4 5 6    3  m =2 l--
            l--; 
        }
        for(int i=k/2-1;i>=0;i--)
         cout<<a[l-i]<<" ";
        for(int j=0;j<=k/2-1;j++)
         cout<<a[r+j]<<" ";
        cout<<endl;
    }
}