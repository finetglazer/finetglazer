#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int c[m]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                c[j]+=a[i][j];
            }
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(max<c[i]) max=c[i];
        }
        
        /* code */
    }
    
}