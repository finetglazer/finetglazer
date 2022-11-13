// 😊😊😊
/*
    b1 chon 1 dinh (lay diem dau tien) 
    b2 tinh dien tichs cac tam giac con lai bang vong lap
    b3 cong lai
*/
#include<bits/stdc++.h>
using namespace std;
struct toado
{
    int x,y;
};
double dis( toado a, toado b)
{
    double dis;
    dis = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    return dis;
}
double area(toado a, toado b,toado c)
{
    double area;
    area = sqrt((dis(a,b)+dis(b,c)+dis(a,c))*(dis(a,b)+dis(b,c)-dis(a,c))*(dis(a,b)+dis(a,c)-dis(b,c))*(dis(a,c)+dis(b,c)-dis(a,b)))/4;
    return area;
}

int main()
{
//    #ifndef ONLINE_JUDGE
//    freopen("INPUT.txt","r",stdin);
//    freopen("OUTPUT.txt","w",stdout);
//    #endif
    int t;
    cin>>t;
    while(t--)
    {
        toado lst[1005];
        int n;//so dinh
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>lst[i].x>>lst[i].y;
        }
        double sum=0;
        for(int i=1;i<=n-2;i++)
        {
            sum += area(lst[1],lst[i+1],lst[i+2]); 
        }
        cout<<fixed<<setprecision(3)<<sum<<endl;
        // n-2 tam giac 
        // n= 5  1 23 / 1 34 / 1 45
        //a[1] a[i+1] a[i+2]
    }
}
