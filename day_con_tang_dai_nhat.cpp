#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;t=1;
    while(t--)
    {
        int n;cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        int len[n+5];
        for(int i=0;i<n;i++)
        {
            len[i]=1;
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j]) 
                {
                    len[i]=max(len[i],len[j]+1);
                }
            }
        }
        cout<<*max_element(len,len+n);
        cout<<endl;
    }
}