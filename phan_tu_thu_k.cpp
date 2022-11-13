#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int n,int m,int k)
{
    vector<int> ans;
    int l1=1;
    int l2=1;
    while(l1<=n && l2<=m)
    {
        if(a[l1]<b[l2])
        {
            ans.push_back(a[l1]);
            l1++;
        }
        else{
            ans.push_back(b[l2]);
            l2++;
        }
    }
    while (l1<=n)
    {
        ans.push_back(a[l1]);
        l1++;
        /* code */
    }
    while (l2<=m)
    {
        ans.push_back(b[l2]);
        l2++;
        /* code */
    }
    cout<<ans[k-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n+5];
        int b[m+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=m;i++) cin>>b[i];
        merge(a,b,n,m,k);
        cout<<endl;
    }
}