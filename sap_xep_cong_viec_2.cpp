#include<bits/stdc++.h>
using namespace std;
struct job
{
    int ma,dl,pr;
};
bool cmp(job a,job b)
{
    return a.pr>b.pr;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        job lt[5000];
        for(int i=1;i<=n;i++) cin>>lt[i].ma>>lt[i].dl>>lt[i].pr;
        sort(lt+1,lt+n+1,cmp);
        bool used[5000];
        memset(used,false,sizeof(used));
        int ans=0;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=lt[i].dl-1;j>=0;j--)
            {
                if(!used[j])
                {
                    used[j]=true;
                    ans+=lt[i].pr;
                    cnt++;
                    break;
                }
                
            }
        }
        cout<<cnt<<" "<<ans;
        cout<<endl;
    }   
}