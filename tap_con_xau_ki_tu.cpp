#include<bits/stdc++.h>
using namespace std;
string s;
int n;
char a[100];
vector<string> vv;
void cal(int pos, string tmp="")
{

    vv.push_back(tmp);
    for(int j=pos;j<=n;j++)
    {
        cal(j+1,tmp+a[j]);
    }
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        vv.clear();
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            a[i+1]=s[i];
        }
        sort(a+1,a+n+1);
        cal(1);
        for(int i=0;i<vv.size();i++)
        {
            cout<<vv[i]<<" ";
        }
        cout<<endl;
    }
}