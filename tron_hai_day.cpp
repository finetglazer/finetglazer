#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+5];
        ll b[n+5];
        ll max=INT_MIN;
        ll min=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<k;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+k);
        vector<int> v;
        int i=0,j=0;
        while(i<n && j<k)
        {
            if(a[i]<b[j])
            {
                v.push_back(a[i]);
                i++;

            }
            else{
                v.push_back(b[j]);
                j++;
            }
        }
        while(i<n)
        {
            v.push_back(a[i]);
            i++;
        }
        while (j<k)
        {
            v.push_back(b[j]);
            j++;
            /* code */
        }
        for(int a=0;a<v.size();a++) cout<<v[a]<<" ";
        cout<<endl;
    }
}