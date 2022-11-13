#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
        string name;
        string ID;
        string birth;
        double gpa;
    public:
        friend istream& operator >> (istream& in,SinhVien &a);
        friend ostream& operator <<(ostream& out, SinhVien a);
};
istream& operator >> (istream& in, SinhVien &a)
{
    getline(in,a.name);
    in>>a.ID;
    in>>a.birth;
    if(a.birth[1]=='/') a.birth.insert(a.birth.begin()+0,'0');
    if(a.birth[4]=='/') a.birth.insert(a.birth.begin()+3,'0');
    in>>a.gpa;
    return in;
}
ostream& operator <<(ostream& out, SinhVien a)
{
    cout<<"B20DCCN001"<<" "<<a.name<<" "<<a.ID<<" "<<a.birth<<" "<<fixed<<setprecision(2)<<a.gpa;
    return out;
}
// void SinhVien::nhap()
// {
//     getline(cin,name);
//     cin>>ID;
//     cin>>birth;
//     if(birth[1]=='/') birth.insert(birth.begin()+0,'0');
//     if(birth[4]=='/') birth.insert(birth.begin()+3,'0');
//     cin>>gpa;
// }
// void SinhVien::xuat()
// {
//     cout<<"B20DCCN001"<<" "<<name<<" "<<ID<<" "<<birth<<" "<<fixed<<setprecision(2)<<gpa;
// }
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}