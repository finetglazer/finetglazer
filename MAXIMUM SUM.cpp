#include<bits/stdc++.h>
using namespace std;
int sum(int a[10005],int m,int n)
{
    int temp=0;
    for(int i=m;i<=n;i++)
    {
        temp+=a[i];
    }
    return temp;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<m;j++)
        {
            cin>>b[j];
        }
        int s=0;
        int tmp=0;
        int temp=0;
        bool cnt=true;
        for(int i=tmp;i<n;i++)
        {
            for(int j=temp;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    if(sum(a,tmp,i)>sum(b,temp,j)) s+=sum(a,tmp,i);
                    else s+=sum(b,temp,j);
                    tmp=i;
                    temp=j;
                    cnt=false;
                }
            }
        }
        if(cnt==false)
        {
            if(sum(a,tmp+1,n-1)>sum(b,temp+1,m-1)) s+=sum(a,tmp+1,n-1);
            else s+= sum(b,temp+1,m-1);
            cout<<s<<endl;
        }
        else
        {
            if(sum(a,tmp+1,n-1)>sum(b,temp+1,m-1)) s+=sum(a,tmp+1,n-1);
            else s+= sum(b,temp+1,m-1);
            cout<<s<<endl;
        }
    }
}