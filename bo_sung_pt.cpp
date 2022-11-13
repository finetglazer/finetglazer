#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        int max=0;
        int min=INT_MAX;
        set<int> st;
        for(int i=0;i<n;i++)
        {
            if(max<a[i]) max=a[i];
            if(min>a[i]) min=a[i];
            st.insert(a[i]);
        }
        int cnt=0;
        for(auto & x: st) cnt++;
        int x=(max-min)+1;
        x-=cnt;
        cout<<x<<endl;
    }
}