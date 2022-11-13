#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t;
    cin>>t;
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
        sort(a,a+n);
        int l=1,r=n;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=vv[i])
            {
                l=i+1;
                break;
            } 
        }
        for(int i=0;i<n;i++)
        {
            if(a[n-i-1]!=vv[n-i-1])
            {
                r=n-i;
                break;
            }
        }
        cout<<l<<" "<<r;
        cout<<endl;
       
        /* code */
    }
    
}