#include<bits/stdc++.h>
using namespace std;
void tong(vector<int> a, vector<int> b)
{
    // 0123 5679 
    // a lon hon b
    int la=a.size();
    int lb=b.size();
    int x=la-lb;
    while(x!=0)
    {
            b.insert(b.begin()+0,0);
            x--;
    }
    // for(int i=0;i<a.size();i++)
    //     cout<<a[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<b.size();i++)
    //     cout<<b[i]<<" ";    
    int d=0;
    vector<int> k;
    for(int i=a.size()-1;i>=0;i--)
    {
        int sum=a[i]-b[i]+d;
        d=sum/10;
        int x=(sum+10)%10;
        k.push_back(x);
    }
    int y=k.size();
    if(d==-1) k[y]--;
    // cout<<endl;
    for(int i=k.size()-1;i>=0;i--)
    {
        cout<<k[i];
    }
}
int main()
{
    int t;
    cin>>t;
    // cin.ignore();
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        vector<int> v1,v2;
        for(int i=0;i<a.size();i++)
        {
            v1.push_back(a[i]-'0');
        }
        for(int i=0;i<b.size();i++)
        {
            v2.push_back(b[i]-'0');
        }
        int x=v1.size(),y=v2.size();
        if(v1.size()>v2.size()) tong(v1,v2);
        // else if(v1.size()==v2.size() && v1[x]>v2[x]) tong(v1,v2);
        // else if(v1.size()==v2.size() && v2[x]>v1[x]) tong(v2,v1);
        else tong(v2,v1);
        cout<<endl;
    }
}