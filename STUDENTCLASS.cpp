#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
        string name;
        string IDC;
        string birth;
        float GPA;
    public:
        void in();
        void out();
};
void student::in()
{
    getline(cin,name);
    cin>>IDC;
    cin>>birth;
    for(int i=0;i<birth.size();i++)
    {
        if(birth[1]=='/') 
        {
            birth.insert(birth.begin(),'0');
        }
        if(birth[4]=='/')
        {
            birth.insert(birth.begin()+3,'0');
        }
    }
    cin>>GPA;
}
void student::out()
{
    cout<<"B20DCCN001"<<" "<<name<<" "<<IDC<<" "<<birth<<" "<<fixed<<setprecision(2)<<GPA;
}
int main()
{
    student a;
    a.in();
    a.out();
}
