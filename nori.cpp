#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string str;
    while(t--)
    {
        getline(cin >> ws, str);
        int sum = 0;
        stringstream ss(str);
        while(ss >> str)
        {
            if(sum + str.length() <= 100)
            {
                cout << str << ' ';
                sum += str.length() + 1;
            }
            else
    		{
				break;
			} 
        }
        cout << endl;
    }
    return 0;
}