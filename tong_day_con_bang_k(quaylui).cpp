#include<bits/stdc++.h>
using namespace std;
int a[15],n,k;
int x[15],cnt=0;
void ktao()
{
    for(int i=0;i<15;i++) x[i]=0;
}
void check()
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(x[i]) sum+=a[i];
    }
    if(sum==k) 
    {
        cnt++;
        cout<<"[";
        vector<int> vv;
        for(int i=1;i<=n;i++)
        {
            if(x[i]==1) vv.push_back(a[i]);       
        }
        sort(vv.begin(),vv.end());
        for(int i=0;i<vv.size()-1;i++) cout<<vv[i]<<" ";
        cout<<vv[vv.size()-1];
        cout<<"] ";
    }
}
void Try(int i)
{
    for(int j=1;j>=0;j--)
    {
        x[i]=j;
        if(i==n) check();
        else Try(i+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ktao();
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        Try(1);
        if(cnt==0) cout<<"-1";
        cnt=0;
        cout<<endl;
    }
}