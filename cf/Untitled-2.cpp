#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int l1 = s1.size() - 1;
        int l2 = s2.size() - 1;
        char x1 = s1[l1];
        char x2 = s2[l2];
        if (x1 < x2)
        {
            cout << ">";
        }
        else if (x1 > x2)
        {
            cout << "<";
        }
        else
        {
            if (x1 == 'L')
            {
                if (s1.size() > s2.size())
                {
                    cout << ">";
                }
                else if (s1.size() < s2.size())
                {
                    cout << "<";
                }
                else
                    cout << "=";
            }
            if (x1 == 'S')
            {
                if (s1.size() < s2.size())
                {
                    cout << ">";
                }
                else if (s1.size() > s2.size())
                {
                    cout << "<";
                }
                else
                    cout << "=";
            }
            if(x1=='M') cout<<"=";
        }
        cout<<endl;
    }
}