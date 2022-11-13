#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return b<a;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        long long n;
        cin>>n;
        vector<int> vv;
        while(n!=0)
        {
            int x=n%10;
            if(x!=0 && x!=1)
                vv.push_back(x);
            n/=10;
        }
        // sort(vv.begin(),vv.end());
        vector<int> v;
        // for(int i=0;i<vv.size();i++) cout<<vv[i]<<" ";
        for(int i=0;i<vv.size();i++)
        {
            if(vv[i]==2) v.push_back(2);
            else if(vv[i]==3 || vv[i]==5 || vv[i]==7)
            {
                v.push_back(vv[i]);
            } 
            else if(vv[i]==4)
            {
                v.push_back(3);
                v.push_back(2);
                v.push_back(2);
            }
            else if(vv[i]==6)
            {
                v.push_back(5);
                v.push_back(3);
            }
            else if(vv[i]==8)
            {
                v.push_back(7);
                v.push_back(2);
                v.push_back(2);
                v.push_back(2);
            }
            else 
            {
                v.push_back(7);
                v.push_back(3);
                v.push_back(3);
                v.push_back(2);
            }
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        } 
        cout<<endl;
    }
}