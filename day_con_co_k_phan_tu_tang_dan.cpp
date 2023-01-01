#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
vector<string> vv;
void cal(int pos,int cnt,string tmp="")
{
    if(cnt==k)
    {
        vv.push_back(tmp);
        return;
    }
    for(int j=pos;j<=n;j++)
    {
        cal(j+1,cnt+1,tmp+to_string(a[j])+" ");
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vv.clear();
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        cal(1,0);
        for(int i=0;i<vv.size();i++)
        {
            cout<<vv[i]<<endl;
        }
    }
}