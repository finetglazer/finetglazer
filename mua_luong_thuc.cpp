#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        int ans=0;
        if(n<m)
        {
            cout<<"-1";
        }
        else{
            if(m*7-6*n>0) cout<<"-1";
            else{
                ans=m*s;
                if(ans%n==0) ans/=n;
                else 
                {
                    ans/=n;
                    ans+=1;
                }
                cout<<ans;
            }
        }
        cout<<endl;
    }
}