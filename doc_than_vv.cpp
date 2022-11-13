#include<bits/stdc++.h>
using namespace std;
int b[1000005];
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(max<a[i]) max=a[i];
        b[a[i]]++;
    } 
    int cnt=0;
    for(int i=0;i<max;i++)
    {
        if(b[a[i]]==1) cnt++;
    }
    cout<<cnt;
}