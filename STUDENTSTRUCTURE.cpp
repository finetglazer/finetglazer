#include<bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    string IDC;
    string birth;
    float gpa;
};

void input(Student &a)
{
    getline(cin,a.name);
    cin>>a.IDC;
    cin>>a.birth;
    cin>>a.gpa;
}
void add(Student &a)
{
    for(int i=0;i<a.birth.size();i++)
    {
        if(a.birth[i]=='/')
        {
            if(i==1) a.birth.insert(a.birth.begin()+0,'0');
            if(i==4) a.birth.insert(a.birth.begin()+3,'0');
        }
    }
}

void print(Student a)
{
    add(a);
    cout<<"B20DCCN001"<<" "<<a.name<<" "<<a.IDC<<" "<<a.birth<<fixed<<setprecision(2)<<" "<<a.gpa;
    

}
int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}