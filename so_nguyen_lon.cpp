#include<bits/stdc++.h>
using namespace std;
int F[1005][1005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n=a.size();
        int m=b.size();
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0) 
                {
                    F[i][j]=0;
                }
                else{
                    if(a[i-1]==b[j-1])
                    {
                        F[i][j]=F[i-1][j-1]+1;
                    } 
                    else{
                        F[i][j]=max(F[i-1][j],F[i][j-1]);
                    }
                }
            }
        }  
        cout<<F[n][m];
        cout<<endl;
    }
}