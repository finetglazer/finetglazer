#include<bits/stdc++.h>
using namespace std;
class examinee
{
    private:
        string name;
        string birth;
        float a,b,c;
    public:
        void in();
        void out();
        float tong();
};
void examinee::in()
{
    getline(cin,name);
    cin>>birth;
    cin>>a>>b>>c;
}

void examinee::out()
{
    float tong = a+b+c;
    cout<<name<<" "<<birth<<" "<<fixed<<setprecision(1)<<tong;
}
int main()
{
    examinee a;
    a.in();
    a.out();
}