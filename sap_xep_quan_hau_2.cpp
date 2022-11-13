#include <bits/stdc++.h>
using namespace std;
int a[10][10],chek[10][10];
int cot[10], cheo1[10], cheo2[10];
int ans=0;
int res=0;
void in()
{
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
            if(chek[i][j]==1) res+=a[i][j];
    }
    ans=max(ans,res);
    res=0;
}
void haulonbi(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (cot[j] == 0 && cheo1[i + j - 1] == 0 && cheo2[8 - i + j] == 0)
        {
            cot[j] = 1;
            cheo1[i + j - 1] = 1;
            cheo2[8 - i + j] = 1;
            chek[i][j] = 1;
            if (i == 8)
                in();
            else
                haulonbi(i + 1);
            cot[j] = 0;
            cheo1[i + j - 1] = 0;
            cheo2[8 - i + j] = 0;
            chek[i][j] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans=0,res=0;
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin>>a[i][j];
            }
        }
        haulonbi(1);
        cout<<ans<<endl;
    }
}