#include<bits/stdc++.h>
using namespace std;
class matrix
{
    private:
        int n,m;
        
    public:
        void in();
        int getn();
        int getm();
};
int matrix::getn()
{
    return n;
}
int matrix::getm()
{
    return m;
}
void matrix::in()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        matrix a;
        a.in();
    }
}