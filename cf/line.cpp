#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll mid=0;
        mid=n/2;
        bool ck=0;
        if(n%2==0)
        {
            ck=1;
        } 
        ll sum=0;
        // 5  rrrll rrlll
        //4 rrll 
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='L') sum+=i;
            else sum+=(n-i-1);
        }
        // cout<<sum<<endl;
        ll k=0;
        ll temp=n;
        ll org=sum;
        string x=s;
        while(temp--)
        {
            s=x;
            sum=org;
            // cout<<s<<" ";
            ll tmp=n-temp;
            for(ll i=0;i<mid;i++)
            {
                if(tmp)
                {
                    if(s[i]=='L')
                    {
                        s[i]='R';
                        sum-=i; 
                        sum+=(n-i-1);
                        tmp--;  
                        // cout<<"ngu"<<endl;
                    } 
                    
                }
                if(tmp==0) break;
                if(tmp)
                {
                    if(s[n-i-1]=='R')
                    {
                        s[n-i-1]='L';
                        sum+=(n-i-1);
                        sum-=i;
                        tmp--;
                        // cout<<"ngu"<<endl;
                    }              
                }
                if(tmp==0) break;
                
            }
            cout<<sum<<" ";
        }
        
        cout<<endl;


    }
}