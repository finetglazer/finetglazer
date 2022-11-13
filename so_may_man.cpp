#include <bits/stdc++.h>
using namespace std;
int toNum(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res += (s[i] - '0');
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vv;
        if (n % 7 == 0)
        {
            int k = n / 7;
            for (int i = 0; i < k; i++)
            {
                cout << 7;
            }
        }
        else if (n % 4 == 0)
        {
            int k = n / 4;
            for (int i = 0; i < k; i++)
            {
                cout << 4;
            }
        }
        else
        {
            while (n % 7 != 0 && n > 4)
            {
                n-=4;
                vv.push_back(4);
            }
            if(n%7!=0) cout<<"-1";
            else{
                int k=n/7;
                for(int i=0;i<k;i++)
                {
                    vv.push_back(7);
                }
                sort(vv.begin(),vv.end());
                for(auto i: vv) cout<<i;
            }
        }
        cout << endl;
    }
}