#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;// 5 va 4 --> 4 va 1 --> 1 va 0
    return gcd(b,a%b);
}
int bc(int a,int b)
{
    return a*b/gcd(a,b);
}
struct Fraction
{
    int x,y;
    friend Fraction operator + (Fraction a, Fraction b)
    {
        Fraction c;
        c.y=bc(a.y,b.y);
        c.x=a.x*(c.y/a.y) + b.x*(c.y/b.y);
        int cns=gcd(c.x,c.y);
        c.x/=cns;
        c.y/=cns;
        return c;
    }
    friend Fraction operator * (Fraction a,Fraction b)
    {
        Fraction c;
        c.x=a.x * b.x;
        c.y=a.y * b.y;
        int cns = gcd(c.x,c.y);
        c.x/=cns;
        c.y/=cns;
        return c;
    }
};
void read_input(Fraction &a)
{
    cin>>a.x>>a.y;
}
void process(Fraction a,Fraction b)
{
    Fraction c,d;
    c = a+b;
    c.x *= c.x;
    c.y *= c.y;
    cout<<c.x<<"/"<<c.y<<" ";
    // d = a*b*c
    d = a * b * c;
    int cns = gcd(d.x,d.y);
    d.x /= cns;
    d.y /= cns;
    cout<<d.x<<"/"<<d.y;
    cout<<endl;
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}

