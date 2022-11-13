#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool sol(ll b[],int n)
{
    sort(b,b+n);
    ll i;
    ll l;
    ll r;
    for(i=n-1;i>=2;i--)
    {
        l=0;
        r=i-1;
        
        while(l<r)
        {
            // cout<<a[l]<<" "<<a[r]<<endl;
            if(b[l]+b[r]>b[i])
            {
                r--;
            }
            else if(b[l]+b[r]<b[i])
            {
                l++;
            }
            else
            {
                return true;
            }
        }
       
    }
    
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        ll py[n+5];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            py[i]=a[i]*a[i];
        }
        // for(int i=0;i<n;i++)cout<<py[i]<<" ";
        if(sol(py,n)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}