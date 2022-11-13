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
void standard_name(string &a)
{
    stringstream ss(a);
    vector<string> vv;
    string tok;
    while(ss>>tok)
    {
        vv.push_back(tok);
    }
    a="";
    for(int i=0;i<vv.size();i++)
    {
        vv[i][0]=toupper(vv[i][0]);
        for(int j=1;j<vv[i].size();j++)
        {
            vv[i][j]=tolower(vv[i][j]);
        }
        a+=vv[i];
        a+=" ";
    }
    
}
istream& operator >> (istream& in, SinhVien &a)
{
    getline(in,a.name);
    standard_name(a.name);
    in>>a.ID;
    in>>a.birth;
    if(a.birth[1]=='/') a.birth.insert(a.birth.begin()+0,'0');
    if(a.birth[4]=='/') a.birth.insert(a.birth.begin()+3,'0');
    in>>a.gpa;
    return in;
}
ostream& operator <<(ostream& out, SinhVien a)
{
    cout<<"B20DCCN001"<<" "<<a.name<<a.ID<<" "<<a.birth<<" "<<fixed<<setprecision(2)<<a.gpa;
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