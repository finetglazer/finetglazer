#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,t;
        cin>>s>>t;
        int ans=0;
        set<int> st;
        st.insert(s);
        queue<pair<int,int>> qu;
        qu.push({s,0});
        while(1)
        {
            pair<int,int> cur=qu.front();
            if(cur.first==t)
            {
                ans=cur.second;
                break;
            } 
            qu.pop();
            if(cur.first>1 && st.count(cur.first-1)==0)
            {
                qu.push({cur.first-1,cur.second+1});
                st.insert(cur.first-1);
            }
            if(cur.first<t && st.count(cur.first*2)==0)
            {
                qu.push({cur.first*2,cur.second+1});
                st.insert(cur.first*2);
            }
        }
        cout<<ans<<endl;
    }
}
