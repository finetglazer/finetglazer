#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int a[1000];
    for(int i=0;i<n;i++) cin>>a[i];
    int b[1000];
    memset(b,0,1000);
    bool d=true;
    int cnt=0;
    while(d)
    {
        int i=n-1;
        while(i>=0 && b[i]!=0)
        {
            i--;
        }
        if(i==-1) d=false;
        else{
            b[i]=a[i];
            for(int j=i+1;j<n;j++)
            {
                b[j]=0;
            }
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=b[j];
            }
            if(sum==k)
            {
                for(int j=0;j<n;j++)
                {
                    if(b[j]!=0) cout<<b[j]<<" ";
                } 
                cout<<endl;
                cnt++;
            }
        }
    }
    cout<<cnt;
}