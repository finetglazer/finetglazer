#include<bits/stdc++.h>
#define ll long long
using namespace std;
class teacher
{
    private:
        string code;
        string name;
        ll salary;
    public:
        void in();
        void out();
};
void teacher::in()
{
    cin>>code;
    cin.ignore();
    getline(cin,name);
    cin>>salary;
}
void teacher::out()
{
    
    int a=(code[3]-'0')+(code[2]-'0')*10;
    salary*=a;
    string jb;
    jb+=code[0];
    jb+=code[1];
    ll gif;
    if(jb=="HT") gif=2000000;
    else if(jb=="HP") gif=900000;
    else gif=500000;
    ll gain=salary+gif;
    cout<<code<<" "<<name<<" "<<a<<" "<<gif<<" "<<gain;
    // HP04 Tran Quoc Huy 4 900000 7212000
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    #endif
    teacher a;
    a.in();
    a.out();
}