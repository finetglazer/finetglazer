#include<bits/stdc++.h>
using namespace std;

int main()
{


    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[100001];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
            if(mp[a[i]] > 1){
                cout << a[i] ;
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << "NO";
        }
        cout << endl;
        
    }
    
}