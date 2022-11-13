// danh dau mang y vs f[5];
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        int cnt=0;
        cin>>n>>m;
        int a[n+5];
        int b[m+5];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        // x>5 va x<y thi moi y lon hon x trong mang b
        // x<5 thi tuy truong hop:
        // x=2 thi loai 4 va 3 
        // x=3 thi xin 2 vi minh da xet het so lon hon x ma minh da bo 2 roi
        int f[5];
        for(int i=0;i<5;i++)
        {
            f[i]=0;
        } 
        for(int i=0;i<m;i++)
        {
            if(b[i]<5) f[b[i]]++;   
        }
        sort(b,b+m);
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) 
            {
                cnt+=0;
            }
            else if(a[i]==1)
            {
                cnt+=f[0];
            }
            else
            {
                int pos= upper_bound(b,b+m,a[i])-b;
                int ans=m-pos;
                ans+=(f[0]+f[1]);
                
                if(a[i]==2) ans-=(f[4]+f[3]);// 3,4 duoc tinh la lon hon x trong mang b
                if(a[i]==3) ans+=f[2];// 2 bi bo quen khi tinhs so louong vi nos nho hown 3
                // tu x>= 4 ko co dac biet vi nho hon nos deu duoc
                cnt+=ans;
            }
            
            
        }
        cout<<cnt<<endl;
    }
}