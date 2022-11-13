#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[1000];
        memset(a,0,1000);
        for(int i=1;i<=n;i++) cin>>a[i];
        int i=n-1;
        while(i>=1 && a[i+1]<a[i])
        {
            i--;
        }
        if(i==0) 
        {
            for(int j=1;j<=n;j++) cout<<j<<" ";
        }
        else{
            int j=n;
            bool d=true;
            while(d)
            {
                if(a[j]>a[i]) break;
            }
            swap(a[j],a[i]);
            sort(a+i+1,a+n);
            for(int j=1;j<=n;j++) cout<<a[j]<<" ";
        }
        cout<<endl;
        /* code */
    }
    
}