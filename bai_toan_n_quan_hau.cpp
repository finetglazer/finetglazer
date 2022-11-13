#include<bits/stdc++.h>
using namespace std;
int n, a[20][20], d1[20], d2[20], c[20];
int dem;
void in()
{
    dem++;
}
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(d1[i+j-1]==0 && d2[i-j+n]==0 && c[j]==0)
        {
            a[i][j]=1;
            d1[i+j-1]=1;d2[i-j+n]=1;c[j]=1;
            if(i==n) in();
            else Try(i+1);
            d1[i+j-1]=0;d2[i-j+n]=0;c[j]=0;
            a[i][j]=0;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        dem=0;
        cin>>n;
        Try(1);
        cout<<dem;
        cout<<endl;
    }
}