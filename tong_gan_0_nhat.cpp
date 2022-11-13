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
        vector<int> vv;
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            vv.push_back(x);
        }
        // for(int i=0;i<n;i++) cout<<vv[i]<<endl;
        int min=INT_MAX;
        int smin=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(vv[i]+vv[j])<smin)
                {
                    min=vv[i]+vv[j]; 
                    smin=abs(vv[i]+vv[j]);
                } 
            }
        }
        cout<<min<<endl;
    }
}