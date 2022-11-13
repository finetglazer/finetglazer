#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct PhanSo
{
    ll tu,mau;
};
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
ll lcm(int a,int b)
{
    return a*b/gcd(a,b);
}
void process(PhanSo &a,PhanSo &b)
{
    PhanSo tong;
    ll mc=lcm(a.mau,b.mau);

   ll tu1= a.tu*(mc/a.mau);
   ll tu2= b.tu*(mc/b.mau);
   tong.tu=tu1+tu2;
   tong.mau=mc;
   ll k=gcd(tong.tu,tong.mau);
   tong.tu/=k;
   tong.mau/=k;
   tong.tu*=tong.tu;
   tong.mau*=tong.mau;
   cout<<tong.tu<<"/"<<tong.mau<<" ";
   PhanSo tich;
   tich.tu=a.tu*b.tu*tong.tu;
   tich.mau=a.mau*b.mau*tong.mau;
   ll l=gcd(tich.tu,tich.mau);
   tich.tu/=l;
   tich.mau/=l;
   cout<<tich.tu<<"/"<<tich.mau;
   cout<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}