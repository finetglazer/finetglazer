#include<bits/stdc++.h>
#define ll long long
using namespace std;
class employee
{
    private:
        string name;
        ll salary;
        int day;
        string pos;
    public:
        void in();
        void out();
};
void employee::in()
{
    getline(cin,name);
    cin>>salary;
    cin>>day;
    cin>>pos;
}
// NV01 Bui Thi Trang 1035000 103500 200000 1338500
void employee::out()
{
    ll salbydo=salary*day;
    ll salgf;
    if(day>=25) salgf=salbydo/5;
    else if(day<25 && day>=22) salgf=salbydo/10;
    else salgf = 0 ;
    ll give;
    if(pos=="GD") give=250000;
    else if(pos=="PGD") give=200000;
    else if(pos=="TP") give= 180000;
    else give=150000;
    ll gain=salbydo+salgf+give;
        cout<<"NV01"<<" "<<name<<" "<<salbydo<<" "<<salgf<<" "<<give<<" "<<gain;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    #endif
    employee a;
    a.in();
    a.out();
}