#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0) break;
        else
        {
            int a[n+5];
            for(int i=0;i<n;i++) cin>>a[i];
            int cnt=0;
            for(int i=1;i<n-1;i++)
            {
                if(a[i]>a[i-1] && a[i]>a[i+1]) cnt++;
            }
            cout<<cnt;
            cout<<endl;
        }

}
}