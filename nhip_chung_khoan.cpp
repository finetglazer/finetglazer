#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        stack<int> st;
        vector<int> vv;
        st.push(1);
        vv.push_back(1);
        for (int i = 2; i <= n; i++)
        {
            if (a[i] < a[st.top()])
            {
                vv.push_back(1);
                st.push(i);
            }
            else
            {
                while (a[i]>=a[st.top()])
                {
                    st.pop();
                    if(st.size()==0) break;
                }
                if(st.size()==0)
                {
                    vv.push_back(i);
                }
                else{
                    vv.push_back(i-st.top());
                }
                st.push(i);
            }
        }
        for(int i=0;i<vv.size();i++) cout<<vv[i]<<" ";
        cout<<endl;
    }
}