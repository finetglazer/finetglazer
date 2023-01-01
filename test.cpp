#include<iostream>
using namespace std;
int ans;
int n;
int a[25][25];
int check[25];
string k;
void cal(int i,int cnt=1,int sum=0,string s="1 ")
{
    if(sum>ans) return;
    if(cnt==n)
    {
        if(ans>sum+a[i][1])
        {
            ans=sum+a[i][1];
            k=s+to_string(1);
        }
        return;
    }
    for(int j=1;j<=n;j++)
    {
        if(check[j]==0)
        {
            check[j]=1;
            cal(j,cnt+1,sum+a[i][j],s+to_string(j)+" ");
            check[j]=0;
        }
    }
    
}
int main()
{
    cin>>n;
    ans=1000000;
    for(int i=1 ;i <=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    check[1]=1;
    cal(1);
    cout<<ans<<endl<<k;
}

