//TRy(int )
// for(gia tri i nhan dc)
/// dieu kien de gan
// gan 
//danh dau la co r
// cau hinh cuoi thi in
// ko thi try(i+1);
// tra lai cau hinh ban dau
// cong thuc ma
#include<bits/stdc++.h>
using namespace std;
// int n;
// int x[100][100] = {0};
// int col[100]={0};
// int skew1[100]={0};
// int skew2[100]={0};
// int cnt=0;
// void in()
// {
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<x[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cnt++;
// }
// void Try(int i)
// {
//     for(int j=1;j<=n;j++)
//     {
//         if(col[j]==0 && skew1[i+j-1]==0 && skew2[i-j+n]==0 && x[i][j]==0)
//         {
//             x[i][j]=1;
//             col[j]=1;
//             skew1[i+j-1]=1;
//             skew2[i-j+n]=1;
//             if(i==n) in();
//             else Try(i+1);
//             x[i][j]=0;
//             col[j]=0;
//             skew1[i+j-1]=0;
//             skew2[i-j+n]=0;
//         }
//     }
// }
int n,x,y;
int a[100][100]={0};
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={-1,-2,-2,-1,1,2,2,1};
void in()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Try(int i,int x,int y)
{
    for(int j=0;j<=7;j++)
    {
        int u=x+dy[j];
        int v=y+dx[j];
        if(a[u][v]==0 && 1<=u && u<=n && 1<=v && v<=n)
        {
            a[u][v]=i;
            if(i==n*n)
            {
                in();
                break;
            } 
            else Try(i+1,u,v);
            a[u][v]=0;
        }
    }
}
int main()
{
    cin>>n>>x>>y;
    a[x][y]=1;
    Try(2,x,y);
}