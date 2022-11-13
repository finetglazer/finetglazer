#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string name;
    string ID;
    string birth;
    double gpa;
};
void nhapThongTinSV(SinhVien &a)
{
    getline(cin,a.name);
    cin>>a.ID;
    cin>>a.birth;
    if(a.birth[1]=='/') a.birth.insert(a.birth.begin()+0,'0');
    if(a.birth[4]=='/') a.birth.insert(a.birth.begin()+3,'0');
    cin>>a.gpa;
}
void inThongTinSV(SinhVien a)
{
    cout<<"N20DCCN001 "<<a.name<<" "<<a.ID<<" "<<a.birth<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}