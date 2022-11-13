#include<bits/stdc++.h>
using namespace std;
int n;
int a[15][15];
int b[1000];
int cnt=0;
void check()
{
    int h=1,c=1;
    int d=1;
    for(int i=1;i<=2*n-2;i++)
    {
        if(b[i]==1) c+=1;
        else h+=1;
        if(a[h][c]==0 || h>n || c>n){
            d=0;
            break;
        }
    }
    if(d)
    {
        for(int i=1;i<=2*n-2;i++)
        {
            if(b[i]==1) cout<<"R";
            else cout<<"D";
        }
        cout<<" ";
        cnt++;
    } 
}
void Try(int i)
{
    // 1 : R  0 : L
    for(int j=0;j<=1;j++)
    {
        b[i]=j;
        if(i==2*n-2) check();
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
        if(a[1][1]==0) cout<<"-1";
        else{
            Try(1);
            if(cnt==0) cout<<"-1";
            cnt=0;
        }
        
        cout<<endl;
    }
}