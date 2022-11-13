#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105];
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
void inf(int i,int j)
{
    a[i][j]='a';
    for(int k=0;k<4;k++)
    {
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]=='O')
        {
            inf(i1,j1);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i][0]=='O') inf(i,0);
            if(a[i][n-1]=='O') inf(i,n-1);
        }
        for(int j=0;j<m;j++)
        {
            if(a[0][j]=='O') inf(0,j);
            if(a[n-1][j]=='O') inf(n-1,j);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]=='a') cout<<"O"<<" ";
                else cout<<"X"<<" ";
            }
            cout<<endl;
        }
    }
}