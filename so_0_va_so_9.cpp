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
        qu.push(9);
        while(1)
        {
            int cur=qu.front();
            if(qu.front()%n==0) break;
            else{
                qu.pop();
                qu.push(cur*10+0);
                qu.push(cur*10+9);
            }
        }
        cout<<qu.front();
        cout<<endl;
    }   
}