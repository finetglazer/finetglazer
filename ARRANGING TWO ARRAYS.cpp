#include<bits/stdc++>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[m],b[n];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<int> vv;
        set<int> ss;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[j]==b[i]) vv.push_back(a[j]);
            }
        }
        for(int i=0;i<vv.length();i++)
        {
            cout<<vv[i]<<" ";
        }
    }
    
}