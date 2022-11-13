#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++) cin>>a[i];
    int y;
    cin>>y;
    for(int i=0;i<n;i++) 
    {
        if(a[i]!=y) cout<<a[i]<<" ";
    }
}