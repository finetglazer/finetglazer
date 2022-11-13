#include<bits/stdc++.h>
using namespace std;
class Point
{
    private:
        /* data */
        double x,y;
    public:
        void in();
        // void out();
        double getx();
        double gety();
};
double Point::getx()
{
    return x;
}
double Point::gety()
{
    return y;
}
double distance(Point a,Point b)
{
    double dis;
    double k= a.getx();
    double l= a.gety();
    double m= b.getx();
    double n= b.gety();
    dis = sqrt((k-m)*(k-m)+(l-n)*(l-n));
    return dis;
}

void Point::in()
{
    cin>>x>>y;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("INPUT.txt","r",stdin);
    // freopen("OUTPUT.txt","w",stdout);
    // #endif
    int t;
    cin>>t;
    while(t--)
    {
        Point a,b;
        a.in();
        b.in();
        cout<<fixed<<setprecision(4)<<distance(a,b)<<endl;
    }
}
