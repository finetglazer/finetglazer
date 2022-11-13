#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fb[94];
void ktao()
{
    fb[1]=1;
    fb[2]=1;
    for(ll i=3;i<93;i++)
    {
        fb[i]=fb[i-1]+fb[i-2];
    }
}
ll cal(ll n,ll k)
{
    if(n==1) return 0;
    if(n==2) return 1;
    if(k<=fb[n-2]) return cal(n-2,k);
    else return cal(n-1,k-fb[n-2]);
}
int main()
{
    ktao();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        cout<<cal(n,k);
        cout<<endl;
    }
}