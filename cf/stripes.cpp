#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[10][10];
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                cin >> a[i][j];
        bool dr=true;
        bool db=true;
        for(int i=0;i<8;i++)
        {
            int cntr=0;
            for(int j=0;j<8;j++)
            {
                if(a[i][j]=='R') cntr++; 
            }
            if(cntr==8) 
            {
                dr=false;
                break;
            }
        }
        if(dr==false) cout<<"R";
        for(int i=0;i<8;i++)
        {
            int cntb=0;
            for(int j=0;j<8;j++)
            {
                if(a[j][i]=='B') cntb++; 
            }
            if(cntb==8) 
            {
                db=false;
                break;
            }
        }
        if(db==false) cout<<"B";
        cout<<endl;
    }
}