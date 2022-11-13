#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, d;
        cin >> s >> d;
        vector<int> vv(d);
        if (s > 9 * d)
        {
            cout << "-1";
        }
        else
        {
            while (s > 9)
            {
                vv[d - 1] = 9;
                d--;
                s -= 9;
            }
            if (d == 1)
            {
                vv[0] = s;
            }
            else if(d!=0)
            {
                vv[d-1] = s-1;
                d--;
                while (d-1 >= 1)
                {
                    vv[d-1] = 0;
                    d--;
                }
                vv[d-1] = 1;
            }
            for (int i=0;i<vv.size();i++)
            {
                cout << vv[i];
            }
            
        }
        cout << endl;
    }
}