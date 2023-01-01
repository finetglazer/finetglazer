#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int v,e,fi;
        cin>>v>>e>>fi;
        vector<int> vv[e+5];
        int x,y;
        for(int i=1;i<=e;i++)
        {
            cin>>x>>y;
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        queue<int> qu;
        qu.push(fi);
        bool check[e+5];
        memset(check,true,sizeof(check));
        check[fi]=false;
        int cur;
        while(qu.size()!=0)
        {
           
            cur=qu.front();
             cout<<cur<<" ";
            qu.pop();
            for(auto i:vv[cur])
            {
                if(check[i]==true)
                {
                    check[i]=false;
                    qu.push(i);
                    break;
                }
            }
        }
        
    }
}