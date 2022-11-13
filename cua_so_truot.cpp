#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5][n+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int m;
    cin>>m;
    int b[m+5][m+5];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    int k=0,l=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<m && j<m) a[i][j]*=b[i][j];
            if(i<m && j>=m)
            {
                a[i][j]*=b[i][l];
                l++;
            } 
            if(i>=m && j>=m)
            {
                a[i][j]*=b[k][l];
                l++;
                
            } 
            if(i>=m && j<m) 
            {
                a[i][j]*=b[k][j];
                
            }
            
            if(l==m) l=0;
        }
        k++;
        if(k==m) k=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}