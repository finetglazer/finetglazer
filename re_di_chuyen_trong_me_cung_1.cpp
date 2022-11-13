#include<bits/stdc++.h>
using namespace std;
int n;
int a[15][15];
int b[1000];
int cnt=0;
void Check()
{
    int c=1,h=1;
    int d=1;
    for(int i=1;i<=2*n-2;i++)
    {
        //0 D 1R
        
        if(b[i]==0) h++;
        else c++;
        if(a[h][c]==0 || h>n || c>n)
        {
            d=0;
            break;
        } 
    }
    if(d) 
    {
        cnt++;
        for(int i=1;i<=2*n-2;i++)
        {
            if(b[i]==0) cout<<"D";
            else cout<<"R";
        }
        cout<<" ";
    }
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        b[i]=j;
        if(i==2*n-2) Check();
        else Try(i+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        if(a[1][1]==0) cnt=0;
        else Try(1);
        if(cnt==0) cout<<"-1";
        else cnt=0;
        cout<<endl;
    }
}