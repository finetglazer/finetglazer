#include<bits/stdc++.h>
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
        int m=n/2;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        } 
        int max=-1;
        for(auto &x: mp)
        {
            if(x.second>m && x.first>max) max=x.first;
        }
        if(max==-1) cout<<"NO";
        else cout<<max;
        cout<<endl;
    }
}