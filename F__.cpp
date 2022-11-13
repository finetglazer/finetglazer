#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n,s;
        cin >> n >> s;
        int a[n+5];
        for(int i=0;i<n;i++) cin >> a[i];
        bitset<40005> dp;
        dp[0] = 1;
        for(int i = 0; i < n; ++i)
            for(int j = s; j >= a[i]; --j)
                if(dp[j - a[i]])
                    dp[j] = 1;
        if(dp[s]) cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    return 0;
}