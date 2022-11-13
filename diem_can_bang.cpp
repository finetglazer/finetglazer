#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[100005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)    cin>>a[i];
        ll sum1=0;
        ll sum2=0;
        for(int i=1;i<n;i++) sum2+=a[i];
        if(sum1==sum2) cout<<"1";
        else{
            bool d=true;
            for(int i=1;i<n;i++)
            {
                sum1+=a[i-1];
                sum2-=a[i];
                if(sum1==sum2)
                {
                    cout<<i+1;
                    d=false;
                    break;
                }
            }
            if(d) cout<<"-1";
        }
        cout<<endl;
    }
}