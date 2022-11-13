#include<bits/stdc++.h>
using namespace std;
int n,m,a[105][105],x[300],cnt=0;
void in()
{
    int ok=1;
    int c=1,h=1;
    for(int i=1;i<=m+n-2;i++)
    {
        
        //1 r 0 d
        if(x[i]==1) c++;
        else h++;
        if(h>n || c>m)
        {
            ok=0;
            break;
        } 
    }
    if(ok)
    {
        cnt++;
    }
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if(i==n+m-2) in();
        else Try(i+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++) 
                cin>>a[i][j];
        Try(1);
        cout<<cnt<<endl;
        cnt=0;
    }
}