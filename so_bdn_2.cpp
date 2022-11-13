#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        queue<ll> qu;
        qu.push(1);
        int cnt=0;
        while(1)
        {
            ll cur=qu.front();
            if(qu.front()%n==0) break;
            else{
                cnt++;
                qu.pop();
                qu.push(cur*10);
                qu.push(cur*10+1);
            }
        }
        cout<<qu.front();
        cout<<endl;
    }   
}