#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)    cin>>a[i];
        int cnt=1;
        int tmp=0;
        vector<vector<int>> vv;
        while(cnt!=0)
        {
            bool d=true;
            vector<int> v;
            tmp++;
            for(int j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    d=false;
                } 
            }
            if(d) cnt=0;
            else
            {
                for(int i=0;i<=n-1;i++) v.push_back(a[i]);
                vv.push_back(v);
            }
        } 
        for(int i=vv.size()-1;i>=0;i--)
        {
            cout<<"Buoc "<<i+1<<": ";
            for(int x: vv[i])  cout<<x<<" ";
            cout<<endl;
        }
    }

}