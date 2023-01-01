#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
vector<string> vv(50);
int b[50]={0};
void in()
{
    for(int i=1;i<=k;i++)
    {
        cout<<vv[b[i]]<<" ";
    }
    cout<<endl;
}
void Try(int i)
{
    for(int j=b[i-1]+1;j<=n-k+i;j++)
    {
        b[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
int main()
{
    set<string> st;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        st.insert(s);
    }
    int i=1;
    for(auto &x: st)
    {
        vv[i]=x;
        i++;
    } 
    n=st.size();
    // for(int i=1;i<=n;i++) cout<<vv[i]<<" ";
    Try(1);
}