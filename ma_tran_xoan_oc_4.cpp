#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int n;cin>>n;
        int a[n][n];
        vector<int> vv;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                vv.push_back(a[i][j]);
            }
        }
        int k=0;
        sort(vv.begin(),vv.end());
        int b[n+1][n+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                b[i][j]=0;
            }
        }
            
        int c1=0,h1=0,c2=n-1,h2=n-1;
        while(c1<=c2 && h1<=h2)
        {
            for(int i=c1;i<=c2;i++)
            {
                b[h1][i]=vv[k];
                k++;
            }
            h1++;
            for(int i=h1;i<=h2;i++)
            {
                b[i][c2]=vv[k];
                k++;
            }
            c2--;
            if(h2>=h1)
            {
                for(int i=c2;i>=c1;i--)
                {
                    b[h2][i]=vv[k];
                    k++;
                }
                h2--;
            }
            if(c2>=c1)
            {
                for(int i=h2;i>=h1;i--)
                {
                    b[i][c1]=vv[k];
                    k++;
                }
                c1++;
            }
        }
   
   
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        /* code */
    
    
}
