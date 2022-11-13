#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        unsigned long long x=0;
        x=(m+1)*m/2;
        long long k=((n-1)*n/2+(n-1));
        k*=m;
        x+=k;
        cout<<x;
        cout<<endl;
    }
}