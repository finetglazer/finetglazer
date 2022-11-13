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
        int s=0;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> b(n);
        b[0]=INT_MIN;
        for(int i=1;i<n;i++) b[i]=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int k=lower_bound(b.begin(),b.end(),a[i])-b.begin();
            // cout<<k<<" ";
            b[k]=a[i];// dong nay hay vi no td de chan nhung thang nho hon
            s=max(s,k);
        }
        cout<<s;
        cout<<endl;
    }
}
