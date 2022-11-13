#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1;
    int a[n+5][n+5];
    for(int i=1;i<=n;i--)
    {
        for(int j=n;j>=1;j--)
        {
            a[j][i]=k;
            k++;
            
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}