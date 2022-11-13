#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000][1000];
int dx[8]={-1,0,1,-1,1,-1,0,1};
int dy[8]={-1,-1,-1,0,0,1,1,1};
void lay(int i,int j)
{
    a[i][j]=0;
    for(int k=0;k<8;k++)
    {
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(a[i1][j1]!=0 && i1>=0 && i1<n && j1>=0 && j1<m)
        {
            lay(i1,j1);
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
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]!=0)
                {
                    lay(i,j);
                    cnt++;
                }
                    
            }
        }
        cout<<cnt;
        cout<<endl;
    }
}