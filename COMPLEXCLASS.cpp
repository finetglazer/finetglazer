/*
b1: thiet lap phep cong
b2: thiet lap phep nhan
b3: in ket qua them i phia sau thang ao
*/
#include<bits/stdc++.h>
using namespace std;
class Complex
{
    private:
        double a,b;
    public:
        void in();
        void out();
        double geta();
        double getb();
        friend Complex operator + (Complex x, Complex y)
        {
            Complex tong;
            tong.a= x.a + y.a;
            tong.b= x.b + y.b;
            return tong;
        }
        friend Complex operator * (Complex x,Complex y)
        {
            Complex tich;
            tich.a = x.a*y.a - x.b*y.b;
            tich.b = x.a*y.b + x.b*y.a;
            return tich;
        }
        
};
void Complex::in()
{
    cin>>a>>b;
}
void Complex::out()
{
    if(b<0)
    {
        b=-b;
        cout<<a<<" - "<<b<<"i";
    }
    // -10 - 20i, -28 - 96i
    else
      cout<<a<<" + "<<b<<"i";
}
double Complex::geta()
{
    return a;
}
double Complex::getb()
{
    return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Complex x,y;
        x.in();
        y.in();
        Complex z=(x+y)*x;
        z.out();
        cout<<", ";
        Complex c=(x+y)*(x+y);
        c.out();
        cout<<endl;
    }
// -8 + 14i, -20 + 48i
// -12 + 34i, -28 + 96i
// -10 - 20i, -28 - 96i
}
