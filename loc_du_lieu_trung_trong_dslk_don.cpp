#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    int cnt[1000];
    set<int> st;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        cnt[a[i]]++;
        // cout<<a[i]<<" ";
    }
    // cout<<endl;
    for(int i=0;i<n;i++) 
    {
        if(cnt[a[i]]!=0) 
        {
            cout<<a[i]<<" ";
            cnt[a[i]]=0;
        }
    }
}