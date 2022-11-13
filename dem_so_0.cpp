#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int k=lower_bound(a+1,a+n+1,1)-a;
        k-=1;
        cout<<k<<endl;
    }
}