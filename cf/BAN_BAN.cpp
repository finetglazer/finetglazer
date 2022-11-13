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
        int res=n/2;
        if(n%2==1)
        {
            res++;
            cout<<res<<endl;
            int tmp=2;
            int cnt=0;
            while(res!=1)
            {
                cout<<tmp<<" ";
                if(cnt%2==0)
                {
                    tmp+=4;
                    cout<<tmp<<endl;
                }
                else {
                    tmp+=2;
                    cout<<tmp<<endl;
                }
                cnt++;
                res-=1;
            }
            int k=3*n-2;
            cout<<k;
            k++;
            cout<<" "<<k<<endl;
        } 
        else{
            cout<<res<<endl;
            int tmp=2;
            int cnt=0;
            while(res!=0)
            {
                cout<<tmp<<" ";
                if(cnt%2==0)
                {
                    tmp+=4;
                    cout<<tmp<<endl;
                }
                else {
                    tmp+=2;
                    cout<<tmp<<endl;
                }
                cnt++;
                res-=1;
            }

        }        
    }
}