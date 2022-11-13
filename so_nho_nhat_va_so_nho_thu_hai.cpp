#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        int min=INT_MAX;
        sort(a,a+n);
        if(a[0]!=a[1]) 
        {
            cout<<a[0]<<" "<<a[1]; 
        }
        else cout<<"-1";
        cout<<endl;
    }
}