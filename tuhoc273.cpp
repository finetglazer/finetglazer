#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5][n+5];
    int d=1;
    int temp=1;
    bool cnt = true;
    while(d!=0)
    {
        if(d==n) 
        {
            cnt = false;
        }
        if(d==1 || d==n)
        {
            if(d==1 && cnt == true)
            {
                a[1][n]=temp;
                temp++;
                d++;
            }
            else if(d==1 && cnt == false)
            {
                a[n][1] = temp;
                temp++;
                d--;
            }
            if(d==n)// de y
            {
                for(int i=1;i<=d;i++)
                {
                    a[i][i] = temp;
                    temp++;
                    d--;
                }
            }
            
        }
        else
        {
            if(cnt == true)
            {
                
                for(int i=1;i<=d;i++)
                {
                    a[i][i+n-d] = temp;
                    temp++;
                } 
                d++;
            }
            else
            {
                for(int i=1;i<=d;i++)
                {
                    a[i+n-d][i] = temp;
                    temp++;
                }
                d--;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
