#include<bits/stdc++.h>
using namespace std;
struct Fraction
{
    long long x,y;

};
void input(Fraction &p)
{
    cin>>p.x>>p.y;    
} 
long long gcd(long long a,long long b)
{
    if(b==0) return a;
    return gcd(b,a%b); 
}
void simplify(Fraction &p)
{
    long long x = gcd(p.x,p.y);
    p.x /= x;
    p.y /= x;
}
void print(Fraction p)
{
    cout<<p.x<<"/"<<p.y;
}
int main()
{
    struct Fraction p;
	input(p);
	simplify(p);
	print(p);
    
	return 0;

}