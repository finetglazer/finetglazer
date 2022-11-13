#include<bits/stdc++.h>
using namespace std;
int n,a[105],x[105];
vector<string> vv;
void cal(int pos,int i)
{
    if(i>=3)
    {
        string tmp="";
        for(int j=1;j<i;j++)
        {
            tmp+=to_string(x[j])+" ";
        }
        vv.push_back(tmp);
    }
    for(int j=pos;j<=n;j++)
    {
        if(a[j]>x[i-1]) 
        {
            x[i]=a[j];
            cal(j+1,i+1);
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cal(1,1);
    sort(vv.begin(),vv.end());
    for(string s: vv)
    {
        cout<<s<<endl;
    }
}