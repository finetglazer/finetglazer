#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++) s+='0';
        // cout<<s;
        // 0->1 end 1->0 
        // d ket thuc
        int d=1;
        vector<string>  vv;
        vv.push_back(s);
        while(d)
        {
            int i=n-1;
            while(s[i]=='1' && i>=0)
            {
                s[i]='0';
                i--;
            }
            if(i<0) d=0;
            else{
                s[i]='1';
            }
            if(d==1) vv.push_back(s);
        } 
        for(int i=0;i<vv.size();i++)
        {
            cout<<vv[i]<<" ";
        }
       
        cout<<endl;
    }
}