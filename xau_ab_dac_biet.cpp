#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int k,int n)
{
    int cnt=0;
    int cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cnt++;
            i++;
            for(;i<n;i++)
            {
                if(a[i]==1) cnt++;
                else break;
                
            }
            if(cnt==k) cnt2++;
            cnt=0;
            i--;
        } 
    }
    if(cnt2==1) return true;
    return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[1000];
    memset(a,0,1000);
    vector<string> vv;
    bool d=true;
    while(d)
    {
        int i=n-1;
        while(i>=0 && a[i]==1) i--;
        if(i==-1) d=false;
        else{
            a[i]=1;
            for(int j=i+1;j<n;j++) a[j]=0;
            if(check(a,k,n))
            {
                string s="";
                for(int j=0;j<n;j++)
                {
                    if(a[j]==0) s+="B";
                    else s+="A";
                }
                vv.push_back(s);
            }
            
        }
    }
    sort(vv.begin(),vv.end());
    cout<<vv.size()<<endl;
    for(int j=0;j<vv.size();j++) cout<<vv[j]<<endl;
}