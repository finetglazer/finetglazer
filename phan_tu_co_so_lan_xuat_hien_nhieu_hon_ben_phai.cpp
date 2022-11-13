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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stack<int> st;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        int cnt[n + 5];
        for (int i = 0; i < n; i++)
        {
            cnt[i] = mp[a[i]];
        }
        int ans[n+5];
        ans[n-1]=-1;
        st.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            if(cnt[i]>=cnt[st.top()])
            {
                while(cnt[i]>=cnt[st.top()])
                {
                    st.pop();
                    if(st.size()==0) break;
                }
                if(st.size()==0) ans[i]=-1;
                else ans[i]=a[st.top()];
                st.push(i);
            }
            else{
                ans[i]=a[st.top()];
                st.push(i);
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    } 
}
