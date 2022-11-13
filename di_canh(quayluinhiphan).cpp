#include<bits/stdc++.h>
using namespace std;
int a[100],n,m,x[100][100];

// ma hoa 0 la xuong 1 sang phai
void kt()
{
    int col=1;
    int row=1;
    bool d=true;
    while(d)
    {
        for(int k=1;k<=m+n-2;k++)
        {
            if(a[k]==1) col++;
            else row++;
            if(x[row][col]==0 || row>n || col>m)
            {
                d=false;
                break;
            }
        }
        if(d)
        {
            for(int k=1;k<=m+n-2;k++) 
            {
                if(a[k]==0) cout<<"D";
                else cout<<"R";
            }
            cout<<endl;
        }
    }
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==m+n-2) kt();
        else Try(i+1);
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>x[i][j];
        }
    }
    Try(1);
}