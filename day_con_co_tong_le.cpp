#include<bits/stdc++.h>
using namespace std;
int n,a[105];
vector<string> vv;
bool cmp(int i,int j)
{
    return i>j;
}
void cal(int pos,int sum,string tmp="")
{
    if( sum==1)
    {
        vv.push_back(tmp);
    }
    for(int i=pos;i<=n;i++)
    {
        cal(i+1,(sum+a[i])%2,tmp+to_string(a[i])+" ");
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vv.clear();
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1,cmp);
        string tmp="";
        cal(1,0,tmp);
        sort(vv.begin(),vv.end());
        for(int i=0;i<vv.size();i++) cout<<vv[i]<<endl;
        
    }
}