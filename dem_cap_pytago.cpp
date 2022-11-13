#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    vector<int> vv;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        vv.push_back(a[i]*a[i]);
    }
    sort(vv.begin(),vv.end());
    int cnt=0;
    for(int i=0;i<vv.size();i++)
    {
        for(int j=i+1;j<vv.size();j++)
        {
            int pos=lower_bound(vv.begin()+j+1,vv.end(),vv[i]+vv[j]) - vv.begin();
            if(pos!=n) continue;
            else if(vv[pos]==vv[i]+vv[j]) cnt++;
        }
    }
    cout<<cnt;
}