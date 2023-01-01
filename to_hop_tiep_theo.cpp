#include<bits/stdc++.h>
using namespace std;
int cnt(int a[],int b[],int n)
{
    set<int> st;
    for(int i=1;i<=n;i++) st.insert(a[i]);
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(st.find(b[i])==st.end()) cnt++;
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[1000];
        for(int i=1;i<=k;i++) cin>>a[i];
        int b[1000];
        for(int i=1;i<=k;i++) b[i]=a[i];
        int i=k;
        while(i>=1 && a[i]==n-k+i)
        {
            i--;
        }
        
        if(i==0) cout<<k;
        else{
            b[i]++;
            for(int j=i+1;j<=k;j++) b[j]=b[j-1]+1;
            // for(int j=1;j<=k;j++) cout<<b[j]<<" ";
            // cout<<endl;
            // for(int j=1;j<=k;j++) cout<<a[j]<<" ";
            // cout<<endl;
            cout<<cnt(a,b,k);
        }
        cout<<endl;
    }
}