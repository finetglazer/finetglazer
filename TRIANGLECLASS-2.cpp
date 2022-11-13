#include<bits/stdc++.h>
using namespace std;
class point
{
    private:
        double x,y;
    public:
        void in();
        double getx();
        double gety(); 
};
void point::in()
{
    cin>>x>>y;
}
double point::getx()
{
    return x;
}
double point::gety()
{
    return y;
}

void dreamers(point a,point b,point c)
{
    // tinh khoang cach
    double x1=a.getx(), y1=a.gety();
    double x2=b.getx(), y2=b.gety();
    double x3=c.getx(), y3=c.gety();
    double ab= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    double bc= sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    double ac=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    // tinh dien tich
    if(ab+bc<=ac || ab+ac<=bc || ac+bc<=ab|| ab<=0 ||ac<=0||bc<=0) cout<<"INVALID"<<endl;
    else 
    {
       double p =(ab+bc+ac)/2;
    double S = sqrt(p *(p-ab) * (p-ac) *(p-bc));
    cout<<fixed <<setprecision(2) <<S<<endl;
    } 
}
int main()
{
    #ifndef ONLINE_JUDGE
   freopen("INPUT.txt","r",stdin);
   freopen("OUTPUT.txt","w",stdout);
   #endif
    int t;
    cin>>t;
    while(t--)
    {
        point a,b,c;
        a.in();
        b.in();
        c.in();
        dreamers(a,b,c);
    }
}