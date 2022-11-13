#include <bits/stdc++.h>
using namespace std;
int cot[100], cheo1[100], cheo2[100];
int n, cnt;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        // cot j hang i
        if (cot[j] == 0 && cheo1[j + i - 1] == 0 && cheo2[  n + j-i] == 0 )
        {
            cot[j]=1;
            cheo1[i + j - 1] = 1;
            cheo2[n +  j -i] = 1;
            if (i == n)
                cnt++;
            else
                Try(i + 1);
            cot[j]=0;
            cheo1[i + j - 1] = 0;
            cheo2[n + j - i] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cnt = 0;
        Try(1);
        cout<<cnt<<endl;
        //  1 2 3
        //
        //
        //
        // i+j-1 n+j-i
    }
}