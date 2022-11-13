#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        vector<int> vv;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            vv.push_back(a[i]);
        }
        sort(vv.begin(),vv.end());
        int fi=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=vv[i])
            {
                fi=i;
                break;
            }
        }
        int ed=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]!=vv[i])
            {
                ed=i;
                break;
            }
        }
        fi++;
        ed++;
        cout<<fi<<" "<<ed;
        cout<<endl;
        /* code */
    }
    
}