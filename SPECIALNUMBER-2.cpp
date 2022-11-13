#include<bits/stdc++.h>
using namespace std;
const int q = 1000000007; 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long sum=0;
        while(k!=0)
        {
            long long temp=1;
            int c=log2(k);
            for(int i=0;i<c;i++)
            {
                temp*=n;
                temp%=q;
            }
            sum+=temp;
            sum%=q;
            k-=pow(2,c);
        }
        if(sum>q) sum%=q;
        cout<<sum<<endl;
    }
}