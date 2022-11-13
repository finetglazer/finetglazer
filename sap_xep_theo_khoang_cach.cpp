#include<bits/stdc++.h>
using namespace std;
struct data
{
    int x,idx,del;
};
bool cmp(data a,data b)
{
    if(a.del==b.del) return a.idx<b.idx;
    return a.del<b.del;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int k;cin>>k;
        data a[10000];
        vector<int> vv;
        for(int i=0;i<n;i++)
        {
            cin>>a[i].x;
            a[i].idx=i;
            a[i].del=abs(a[i].x-k);
        }
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++) cout<<a[i].x<<" ";
        cout<<endl;
        /* code */
    }
    
}