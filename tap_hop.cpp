#include<bits/stdc++.h>
using namespace std;
int n,s,k;
int a1[2];
int a[1000];
int sum=0;
int cnt =0;
void Try(int i)
{
    for(int j=1;j>=0;j--)
    {
        if(a1[j])
        {
            a[i]=j;
            a1[j]--;
            if(i==n) 
            {
                for(int tmp=1;tmp<=n;tmp++)
                {
                    if(a[tmp]==1) sum+=tmp;
                    // cout<<a[tmp]<<" ";
                }
                // cout<<endl;
                if(sum==s) cnt++;
                sum=0;
            }
            else Try(i+1);
            a1[j]++;
        }
    }
}
int main()
{
    while(1)
    {
        cin>>n>>k>>s;
        if(n==0 && s==0 && k==0)    break;
        else{
            if(n<k) cout<<"0"<<endl;
            //1 : picked numbers 0 : contrast
            else
            {
                a1[0]=n-k;
                a1[1]=k;
                Try(1);
                cout<<cnt<<endl;
                cnt=0;
            }

        }
    }
}