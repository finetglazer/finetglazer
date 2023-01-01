#include<bits/stdc++.h>
using namespace std;
int check(int a[],int b[],int n)
{
    int cnt=0;
    set<int> st;
    for(int i=1;i<=n;i++)
    {
        st.insert(a[i]);
    }
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
        int b[1000];
        for(int i=1;i<=k;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        } 
        int i=k;
        while(i>=1 && a[i]==n-k+i) i--;
        if(i==0) cout<<k<<endl;
        else{

            a[i]++;
            for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
            cout<<check(a,b,k)<<endl;
        }
    }
}