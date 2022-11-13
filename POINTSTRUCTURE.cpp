#include<bits/stdc++.h>
using namespace std;
struct Point
{
    double x,y;
    friend Point operator - (const Point a, const Point b)
    {
        Point hieu;
        hieu.x = a.x - b.x;
        hieu.y = a.y - b.y;
        return hieu;
    }
};
void input(Point &a)
{
    cin>>a.x>>a.y;
}
 double distance(const Point a, const Point b)
{
    Point n;
    n = a - b;
    double m;
    return m = sqrt(n.x * n.x + n.y * n.y);  
}
int main()
{
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
