#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
class PhanSo{
	private:
		ll tu, mau;
	public:
        friend istream& operator >> (istream &in,PhanSo &a);
        friend ostream& operator << (ostream &out,PhanSo a);
        void rutgon();
        PhanSo(ll tu, ll mau);
};
PhanSo::PhanSo(ll tu, ll mau)
{
    this->tu=tu;
    this->mau=mau;
}
istream& operator >> (istream &in,PhanSo &a)
{
    in>>a.tu>>a.mau;
    return in;
}
void PhanSo::rutgon()
{
    ll k =gcd(tu,mau);
    tu/=k;
    mau/=k;
}
ostream& operator << (ostream &out,PhanSo a)
{
    out<<a.tu<<"/"<<a.mau;
    return out;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}