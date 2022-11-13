#include<bits/stdc++.h>
#define ll long long
using namespace std;
void cal(ll n)
{
    ll ugly[n+5];
    ugly[0]=1;
    // ktao 3 thang dan
    ll n2=2,n3=3,n5=5; 
    ll i1=0,i2=0,i3=0;
    ll next=0;
    for(int i=1;i<=n;i++ )
    {
        next=(min(n2,min(n3,n5)));
        ugly[i]=next;
        if(next==n2)
        {
            i1++;
           n2= ugly[i1]*2;
        }
        if(next==n3)
        {
            i2++;
           n3= ugly[i2]*3;
        }
        if(next==n5)
        {
            i3++;
            n5=ugly[i3]*5;
        }
    }
    cout<<ugly[n-1]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cal(n);
    }
}