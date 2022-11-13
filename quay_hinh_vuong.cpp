#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        string s1, s2;
        for (int i = 0; i < 6; i++)
        {
            cin >> x;
            s1 += (x + '0');
        }
        for (int i = 0; i < 6; i++)
        {
            cin >> x;
            s2 += (x + '0');
        }
        set<string> st;
        st.insert(s1);
        queue<pair<string,int>> qu;
        qu.push({s1,0});
        while(qu.size()!=0)
        {
            pair<string,int> cur=qu.front();
            qu.pop();
            if(cur.first==s2) 
            {
                cout<<cur.second<<endl;
                break;
            }
            string tmp1=cur.first;
            swap(tmp1[0],tmp1[3]);
            swap(tmp1[1],tmp1[3]);
            swap(tmp1[3],tmp1[4]);
            if(st.count(tmp1)==0)
            {
                qu.push({tmp1,cur.second+1});
                st.insert(tmp1);
            }
            string tmp2=cur.first;
            swap(tmp2[1],tmp2[4]);
            swap(tmp2[2],tmp2[4]);
            swap(tmp2[4],tmp2[5]);
            if(st.count(tmp2)==0)
            {
                qu.push({tmp2,cur.second+1});
                st.insert(tmp2);
            }
        }

    }
}