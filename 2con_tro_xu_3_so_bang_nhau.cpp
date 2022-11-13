#include<bits/stdc++.h>
using namespace std;
bool find(int a[],int n,int k)
{
    sort(a,a+n);
    bool d=true;
    int l,r;
    for(int i=0;i<n-2;i++)
    {
        l=i+1;
        r=n-1;
        while(l<r)
        {
            if(a[i]+a[l]+a[r]==k)
            {
                return true;
            }
            else if(a[i]+a[l]+a[r]<k)
            {
                l++;
            }
            else r--;
        }
        // 1 4 5 6 8 10 22  
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[5005];
        for(int i=0;i<n;i++) cin>>a[i];
       if(find(a,n,k)) cout<<"YES";
       else cout<<"NO";
       cout<<endl;
    }
}