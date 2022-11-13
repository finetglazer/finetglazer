#include<bits/stdc++.h>
#define ll long long
#define q 1000000007
using namespace std;
long long poww(int a,ll b)
{
    if(b==0) return 1;
    else{
        ll n=poww(a,b/2);
        n%=q;
        if(b%2==0) return (n*n)%q;
        else return (a*((n*n)%q))%q;
    }
}
int main()
{
    while(1)
    {
        ll a,b;
        cin>>a>>b;
        if(a==0 && b==0) break;
        else {
          cout<<poww(a,b)<<endl;  
        }
        
    }
}