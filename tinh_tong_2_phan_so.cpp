#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return a*b/gcd(a,b);
}
class PhanSo
{
	private:
		long long tu, mau;
	public:
        friend istream& operator >> (istream &in,PhanSo &a);
        friend ostream& operator << (ostream &out,PhanSo a);
        friend PhanSo operator + (PhanSo a,PhanSo b);
        PhanSo(ll tu, ll mau);
};
PhanSo::PhanSo(ll tu, ll mau)
{
    this->tu=tu;
    this->mau=mau;
}
PhanSo operator + (PhanSo a,PhanSo b)
{
    PhanSo tong(1,1);
    ll mc=lcm(a.mau,b.mau);
    ll k=mc/a.mau;
    ll l=mc/b.mau;
    a.tu*=k;
    b.tu*=l;
    tong.tu=a.tu+b.tu;
    tong.mau=mc;
    ll vl=gcd(tong.tu,tong.mau);
    tong.tu/=vl;
    tong.mau/=vl;
    return tong;
}
istream& operator >> (istream &in,PhanSo &a)
{
    in>>a.tu>>a.mau;
    return in;
}
ostream& operator << (ostream &out,PhanSo a)
{
    out<<a.tu<<"/"<<a.mau;
    return out;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}