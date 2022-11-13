#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+5];
        vector<int> vv;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            vv.push_back(a[i]);
        }
        sort(vv.begin(),vv.end());
        bool d=true;
        for(int i=0;i<n;i++)
        {
            int id1=0;
            int id2=0;
            for(int j=0;j<n;j++)
            {
                if(a[j]==vv[i]) id1=j;
                if(a[j]==vv[n-i-1]) id2=j;
            }
            if(id1+id2!=n-1) d=false; 
        }
        if(d) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }

}