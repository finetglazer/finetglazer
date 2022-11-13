#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        vector<int> vv;
        int x;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            v.push_back(x);
            vv.push_back(abs(k-x));
        }   
        sort(vv.begin(),vv.end());
        for(int i=0;i<vv.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(abs(k-v[j])==vv[i])
                {
                    cout<<v[j]<<" ";
                    v.erase(v.begin()+j);
                    j--;
                } 
            }
        }  
        cout<<endl;
    }
}