#include<bits/stdc++.h>
using namespace std;
int a[100005];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v,vv;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i%2==0) vv.push_back(a[i]);
        else v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    sort(vv.begin(),vv.end(),cmp);
    for(int i=0;i<n/2;i++)
    {
        cout<<v[i]<<" "<<vv[i]<<" ";
    } 
    if(n%2!=0) cout<<v[n/2];
}