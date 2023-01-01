#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    cin >> v;
    cin.ignore();
    int a[v + 5][v + 5];
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            a[i][j] = 0;
        }
    }
    int x;
    string tmp;
    for (int i = 1; i <= v; i++)
    {
        getline(cin,tmp); 
        string s;
        stringstream ss(tmp);
        while(ss>>s)
        {
            x=stoi(s);
            a[i][x]=1;
        }
    }
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}