#include<bits/stdc++.h> 
using namespace std; 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int l[n+5];
        int s=0;

        for(int i=0;i<n;i++)
        {
            l[i]=0;
            for(int j=i-1;j>=0;j--)
            {
                if(a[i]>a[j])
                    l[i]=max(l[i],l[j]);
            }
            l[i]++;
            s=max(l[i],s);
        }
        cout<<s;
        cout<<endl;
    }
}