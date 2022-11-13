#include<bits/stdc++.h>
using namespace std;
class college
{
    private:
        string name;
        double gpa;
        static int id;
    public:
        void in();
        void out();
        void riseid();
        friend bool operator < (college a, college b);
        double getgpa();
        bool cmp();
};
double college::getgpa()
{
    return gpa;
}
// bool operator < (college a, college b)
// {
//     return a.getgpa()<b.getgpa();
// }
bool cmp(college a,college b)
{
    return a.getgpa()<b.getgpa();
}
int college::id =1;
void college::in()
{
    cout<<"name: ";
    getline(cin,name);
    cout<<"gpa: ";
    cin>>gpa;
    cin.ignore();
}
void college::riseid()
{
    id++;
}
void college::out()
{
    string x = "B21DCCN"+ string(3-to_string(id).length(),'0')+to_string(id);
    cout<<x<<endl<<name<<endl<<gpa<<endl;
    id++;
}
int main()
{
    college a[100];
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++)
    {
        a[i].in();
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        a[i].out();
    }
}