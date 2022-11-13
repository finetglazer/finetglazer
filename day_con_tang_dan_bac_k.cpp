#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i+1]) return false; 
    }
    return true;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[1000];
    for(int i=1;i<=n;i++) cin>>a[i];
    int b[1000];
    for(int i=1;i<=k;i++) b[i]=a[i];
    // for(int i=1;i<=k;i++) cout<<b[i]<<" ";
    bool d=true;
    int cnt=0;
    if(check(b,k)) cnt=1;
    while(d)
    {
        int i=k;
        while(i>=1 && b[i]==a[n-k+i]) i--;
        if(i==0) d=false;
        else{
            int e=0;
            int j=n;
            while(1)
            {
                if(a[j]==b[i]) break;
                j--;
            }
            j++;
            b[i]=a[j];
            j++;
            for(int l=i+1;l<=k;l++) b[l]=a[j++];
            if(check(b,k))
            {
                cnt++;
            }
            
        }

    }
    cout<<cnt;
}