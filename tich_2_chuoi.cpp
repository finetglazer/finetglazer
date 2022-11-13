#include<bits/stdc++.h>
using namespace std;
void tich(string &a,string &b)
{
    int a1[1005][1005];
    for(int i=0;i<1005;i++)
        for(int j=0;j<1005;j++) 
            a1[i][j]=0;
    vector<int> v1,v2,vv;
    for(int i=0;i<a.size();i++) v1.push_back(a[i]-'0');
    for(int i=0;i<b.size();i++) v2.push_back(b[i]-'0');
    // for(int i=0;i<v1.size();i++) cout<<v1[i];
    // cout<<endl;
    // for(int i=0;i<v2.size();i++) cout<<v2[i];
    // cout<<endl;
    int l=0,k=0;
    int s=0;
    for(int i=v2.size()-1;i>=0;i--)
    {
        int nho=0;
        k=l;
        for(int j=v1.size()-1;j>=0;j--)
        {
            int nhan=v1[j]*v2[i]+nho;
            nho=nhan/10;
            // cout<<l<<k<<" ";
            a1[l][k++]=(nhan%10);
            // cout<<a1[l][k-1]<<" ";
        }
        bool d=true;
        if(nho) {
            a1[l][k++]+=nho; 
        }
        
        //  reverse(a1[l]+l,a1[l]+k);
        l++;
    }
    for(int i=0;i<l;i++)
    {
        reverse(a1[i]+0,a1[i]+k);
    }

    // cout<<k<<" "<<l;
    // for(int i=0;i<l;i++)
    // {
    //     for(int j=0;j<k;j++)
    //     {
    //         cout<<a1[i][j];
    //     }
    //     cout<<endl;
    // }
    int tmp=0;
    for(int j=k-1;j>=0;j--)
    {
        int sum=tmp;
        for(int i=l-1;i>=0;i--)
        {
            sum+=a1[i][j];
        }
        // cout<<sum<<" ";
        tmp=sum/10;
        vv.push_back(sum%10);

    }
    if(tmp) vv.push_back(1);
    reverse(vv.begin(),vv.end());
    int v=0;
    while(vv[v]==0)
    {
        if(v==vv.size()) break;
        v++;
    } 
    if(v==vv.size()) cout<<"0";
    else 
    {
        for(int i=v;i<vv.size();i++) 
        {
            cout<<vv[i];
        }
    }

    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        tich(a,b);
    }
}