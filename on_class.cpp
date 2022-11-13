#include<bits/stdc++.h>
using namespace std;
int k=1;
class NhanVien
{
    private:
        string name,sex,birth,add,num,date;
        string ma;
    public:
        friend istream& operator >>(istream &in, NhanVien &x)
        {
            cin.ignore();
            x.ma="000";
            if(k<=9) 
            {
                string s="0";
                s+=(k+'0');
                x.ma+=s;
            }
            else{
                x.ma+=to_string(k);
            }
            getline(in,x.name);
            in>>x.sex>>x.birth;
            cin.ignore();
            getline(in,x.add);
            in>>x.num>>x.date;
            k++;
            return in;
        }
        friend ostream& operator << (ostream &out,NhanVien x)
        {
            out<<x.ma<<" "<<x.name<<" "<<x.sex<<" "<<x.birth<<" "<<x.add<<" "<<x.num<<" "<<x.date<<endl;
            return out;
        }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}