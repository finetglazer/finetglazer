#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+5][m+5];
        vector<int> vv;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int c1=0,c2=m-1,h1=0,h2=n-1;
        while(c1<=c2 && h1<=h2)
        {
            for(int i=c1;i<=c2;i++)
            {
                vv.push_back(a[h1][i]);
            }
            h1++;//h1=1
            for(int i=h1;i<=h2;i++)
            {
                vv.push_back(a[i][c2]);
            }
            c2--;//c2=1
            if(h2>=h1)
            {
                for(int i=c2;i>=c1;i--)
                {
                    vv.push_back(a[h2][i]);
                }

                h2--;//h2=1
            }
            if(c2>=c1)
            {
                for(int i=h2;i>=h1;i--)
                {
                    vv.push_back(a[i][c1]);
                }
     
                c1++;//c1=1
            }
        }
        for(int i=0;i<vv.size();i++) cout<<vv[i]<<" ";
        cout<<endl;
    }
}