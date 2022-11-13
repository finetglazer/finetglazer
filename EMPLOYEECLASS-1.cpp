#include<bits/stdc++.h>
using namespace std;
class employee
{
    private:
        string name;
        string sex;
        string birth;
        string add;
        string tax;
        string day;
    public:
        void in();
        void out();
};
void employee::in()
{
    getline(cin,name);
    cin>>sex;
    cin>>birth;
    cin.ignore();
    getline(cin,add);
    cin>>tax;
    cin>>day;
}
void employee::out()
{
    cout<<"00001"<<" "<<name<<" "<<sex<<" "<<birth<<" "<<add<<" "<<tax<<" "<<day;
}
// }00001 Nguyen Van Hoa Nam 11/22/1982 Mo Lao-Ha Dong-Ha Noi 8333123456 31/12/2013
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