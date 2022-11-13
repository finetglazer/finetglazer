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
        stack<int> st1,st2;
        st1.push(n - 1);st2.push(n-1);
        int greater[n + 5];
        int smaller[n+5];
        smaller[n-1] = -1;
        greater[n - 1] = - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] < a[st1.top()])
            {
                greater[i] = st1.top();
                st1.push(i);
            }
            else
            {
                while (a[st1.top()] <= a[i])
                {
                    st1.pop();
                    if (st1.size() == 0)
                        break;
                }
                if (st1.size() == 0)
                    greater[i] = -1;
                else
                    greater[i] = st1.top();
                st1.push(i);
            }
            if (a[i] > a[st2.top()])
            {
                smaller[i] = st2.top();
                st2.push(i);
            }
            else
            {
                while (a[st2.top()] >= a[i])
                {
                    st2.pop();
                    if (st2.size() == 0)
                        break;
                }
                if (st2.size() == 0)
                    smaller[i] = -1;
                else
                    smaller[i] = st2.top();
                st2.push(i);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(greater[i]!=-1)
            {
                if(smaller[greater[i]]!=-1) 
                {
                    cout<<a[smaller[greater[i]]]<<" ";
                }
                else cout<<-1<<" ";
            }
            else{
                cout<<-1<<" ";
            }
        } 
        
        cout<<endl;
    }
}