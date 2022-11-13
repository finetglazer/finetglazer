#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string name;
    string Id;
    string birth;
    double gpa;
};
string id(int n)
{
    string a="B20DCCN";
    if(n<=9)
    {
        a+="00";
        n+='0';
        a+=n;
    }
    else 
    {
        a+='0';
        int d=n/10;
        int k=n%10;
        a+=(d+'0');
        a+=(k+'0');
    }
    return a;
}

void nhap(SinhVien ds[],int n)
{
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        getline(cin,ds[i].name);
        cin>>ds[i].Id;
        cin>>ds[i].birth;
        if(ds[i].birth[1]=='/') ds[i].birth.insert(ds[i].birth.begin()+0,'0');
        if(ds[i].birth[4]=='/') ds[i].birth.insert(ds[i].birth.begin()+3,'0');
        cin>>ds[i].gpa;
        cin.ignore();
    }
}
void in(SinhVien ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<id(i+1)<<" "<<ds[i].name<<" "<<ds[i].Id<<" "<<ds[i].birth<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
    }
    // cout<<endl;
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}