#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t = 1, n, k, x;
    cin >> t;
    while(t--)
    {
        deque<int> dq;
        cin >> n >> k;
        int a[n];
        for(int &i : a) cin >> i;
        dq.push_back(0);
        for(int i = 1; i < k; ++i)
        {
            while(!dq.empty() && a[dq.back()] < a[i]) dq.pop_back();
            dq.push_back(i);
        }
        cout << a[dq.front()] << ' ';
        for(int i = k; i < n; ++i)
        {
            while(!dq.empty() && a[dq.back()] < a[i]) dq.pop_back();
            dq.push_back(i);
            if(i - dq.front() < k) cout << a[dq.front()] << ' ';
            else
            {
                dq.pop_front();
                cout << a[dq.front()] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}