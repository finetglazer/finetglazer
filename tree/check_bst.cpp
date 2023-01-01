#include<bits/stdc++.h>
using namespace std;
bool check(int n,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]<=a[i]) return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(check(n,a)) cout<<"YES";
    else cout<<"NO";
}