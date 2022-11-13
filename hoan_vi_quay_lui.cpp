#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000];
int conhau(int a[],int n)
{
    // 1 0 0 0 1 - 5 2 
    for(int i=n/2;i>=1;i--)
    {
        if(a[i]!=a[n-i+1]) return 0;  
    }
    return 1;
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n) 
        {
            if(conhau(a,n))
            {
                for(int k=1;k<=n;k++)
                {
                    cout<<a[k]<<" ";
                }
                cout<<endl;
            }
            
        }
        else Try(i+1);
    }
}
int main()
{
    cin>>n;
    Try(1);
}