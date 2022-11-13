#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool d=true;
        int a[1000];
        memset(a,0,1000);
        for(int i=1;i<=n;i++) a[i]=i;
        reverse(a+1,a+n+1);
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<" ";
        while(d)
        {
            int i=n-1;
            while(i>=1 && a[i+1]>a[i])
            {
                i--;
            }
            if(i==0) d=false;
            else{
                int j=n;
                while(1)
                {
                    if(a[j]<a[i]) break;
                    j--;
                }
                swap(a[i],a[j]);
                reverse(a+i+1,a+n+1);
                for(int k=1;k<=n;k++) cout<<a[k];
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
