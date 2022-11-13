#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int k;cin>>k;
    int b;cin>>b;
    map<int,int> mp;
    int d[b];
    for(int i=0;i<b;i++)
    {
        cin>>d[i];
        mp[d[i]]++;
    } 
    int a[n+5];
    for(int i=1;i<=n;i++)
    {
        if(mp[i]) a[i]=0;
        else a[i]=1;
    } 
    int min=0;
    for(int i=1;i<=k;i++)
    {
        if(a[i]==0) min++;
    }
    int x=min;
    for(int i=k+1;i<=n;i++)
    {
        if(a[i-k]==0) x--;
        if(a[i]==0) x++; 
        if(x<min) min=x;
    }
    cout<<min;
    // for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
    

}