#include<bits/stdc++.h>
using namespace std;
int k=1;
string standard_name(string &a)
{
    stringstream ss(a);
    string tok;
    string b="";
    while(ss>>tok)
    {
        tok[0]=toupper(tok[0]);
        for(int i=1;i<tok.size();i++)
        {
            tok[i]=tolower(tok[i]);
        }
        b+=tok;
        b+=" ";
    }
    return b;
}
class SinhVien
{
    private:
       
        string masv;
        string name,id,birth;
        double gpa;
    public:
        double getgpa();

        friend istream& operator >> (istream& in, SinhVien &x)
        {
            string d=to_string(k);
            string x.masv="B20DCCN"+string(3-d.size(),'0')+d;
            cin.ignore();
            getline(cin,x.name);
            cin>>x.id;
            cin>>x.birth;
            if(x.birth[1]=='/') x.birth.insert(x.birth.begin(),'0');
            if(x.birth[4]=='/') x.birth.insert(x.birth.begin()+3,'0');
            x.name=standard_name(x.name);
            cin>>x.gpa;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien x)
        {
            out<<"B20DCCN"
            out<<x.name<<x.id<<" "<<x.birth<<" "<<fixed<<setprecision(2)<<x.gpa<<endl;
            return out;
        }

};
int SinhVien::k=1;
double SinhVien::getgpa()
{
    return gpa;
}
bool cmp(SinhVien a,SinhVien b)
{
    return a.getgpa()>b.getgpa();
}
void sapxep(SinhVien a[],int n)
{

}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
