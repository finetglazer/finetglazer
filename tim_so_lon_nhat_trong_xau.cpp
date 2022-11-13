#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        vector<int> vv;
        for(int i=0;i<a.size();i++)
        {
            string k="";
            int n=0;
            bool d=true;
            while(a[i]>='0'&&a[i]<='9')
            {
                n*=10;
                n+=(a[i]-'0');
                d=false;
                i++;
            }
            if(d==false)vv.push_back(n);
        }
        int max=0;
        for(int i=0;i<vv.size();i++)
        {
            if(max<vv[i]) max=vv[i];
        }
        cout<<max;
        cout<<endl;
    }
}