#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int b[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i]) return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[1000];
        int b[1000];
        for(int i=1;i<=k;i++) cin>>a[i];
        for(int i=1;i<=k;i++) b[i]=i;
        int cnt=1;
        if(check(a,b,k)) cout<<cnt;
        else{
            bool d=true;
            while(d)
            {
                int i=k;
                while(i>=1 && b[i]==n-k+i)
                {
                    i--;
                }
                if(i==0) 
                {
                    cout<<cnt;
                    break;
                }
                else{
                    b[i]++;
                    for(int j=i+1;j<=k;j++) b[j]=b[j-1]+1;
                    cnt++;
                    if(check(a,b,k))
                    {
                        cout<<cnt;
                        break;
                    } 
                }
            }
        }
        cout<<endl;
        
    }
}