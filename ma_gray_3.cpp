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
        string x;
        cin>>x;
        int c[2000];
        int n=x.size();
        for(int i=1;i<=n;i++)
        {
            c[i]=x[i-1]-'0';
        }
        bool d=true;
        int e[1000];
        memset(e,0,1000);
        int cnt2=2;
        while(d)
        {
            int i=n;
            while(i>=1 && e[i]==1) i--;
            if(i==0) 
            {
                for(int i=1;i<=n;i++) cout<<"1";
            }
            else{
                e[i]=1;
                for(int j=i+1;j<=n;j++) e[j]=0;
                if(check(e,c,n))
                {
                    break;
                }
            }
            cnt2++;
        }
        int a[2000];
        int s=1;
        for(int i=1;i<=n;i++) 
        {
            s*=2;
        }
        s-=1;
        for(int i=1;i<=s;i+=2)
        {
            a[i]=n;
        }
        for(int i=2;i<=s;i+=4)
        {
            a[i]=n-1;
        }
        for(int i=4;i<=s;i+=8)
        {
            a[i]=n-2;
        }
        for(int i=8;i<=s;i+=16)
        {
            a[i]=n-3;
        }
        for(int i=16;i<=s;i+=32) a[i]=n-4;
        for(int i=32;i<=s;i+=64) a[i]=n-5;
        for(int i=64;i<=s;i+=128) a[i]=n-6;
        for(int i=128;i<=s;i+=256) a[i]=n-7;
        for(int i=256;i<=s;i+=512) a[i]=n-8;
        for(int i=512;i<=s;i+=1024) a[i]=n-9;
        int b[1000];
        memset(b,0,100);
        int cnt=2;
        while(s!=0)
        {        
            // cout<<s<<endl;
            if(b[a[s]]==1) b[a[s]]=0; 
            else b[a[s]]=1;
            if(cnt==cnt2) 
            {
                for(int i=1;i<=n;i++) cout<<b[i];
                break;
            } 
            cnt++;
            s--;
        }
        // cout<<cnt;
        
        cout<<endl;
    }
}
// trick :0000 ko co trong test nen lach dc bang cnt=2