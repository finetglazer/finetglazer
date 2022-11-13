#include<bits/stdc++.h>
using namespace std;
class examinee
{
    private:
        string ID;
        string name;
        double M,P,C;
    public:
        void in();
        void out();
};
void examinee::in()
{
    cin>>ID;
    cin.ignore();
    getline(cin,name);
    cin>>M>>P>>C;
}
void examinee::out()
{
    double tong=2*M+P+C;
    float add;
    double last;
    if(ID[2]=='1')
    {
        last=tong+0.5;
        add=0.5;
    }  
    else if(ID[2]=='2')
    {
        last=tong+1;

         add=1.0;
    }   
    
    else 
    {
        last= tong+2.5;
        add=2.5;
    }   
    int t=tong;
    int a=add;
    if(last>=24)
    {
        if(tong==t && add==a) cout<<ID<<" "<<name<<" "<<a<<" "<<t<<" "<<"PASSED";
        if(tong!=t && add!=a){
            cout<<ID<<" "<<name<<" "<<fixed<<setprecision(1)<<add<<" "<<tong<<" "<<"PASSED";
        } 
        if(tong == t && add !=a)
        {
            cout<<ID<<" "<<name<<" "<<fixed<<setprecision(1)<<add;cout<<" "<<t<<" "<<"PASSED";
        } 
        if(tong != t && add ==a)
        {
            cout<<ID<<" "<<name<<" "<<a;cout<<fixed<<setprecision(1)<<" "<<tong<<" "<<"PASSED";
        } 
    }
    else
    {
        if(tong==t && add==a) cout<<ID<<" "<<name<<" "<<a<<" "<<t<<" "<<"FAILED";
        if(tong!=t && add!=a){
            cout<<ID<<" "<<name<<" "<<fixed<<setprecision(1)<<add<<" "<<tong<<" "<<"FAILED";
        } 
        if(tong == t && add !=a)
        {
            cout<<ID<<" "<<name<<" "<<fixed<<setprecision(1)<<add;cout<<" "<<t<<" "<<"FAILED";
        } 
        if(tong != t && add ==a)
        {
            cout<<ID<<" "<<name<<" "<<a;cout<<" "<<fixed<<setprecision(1)<<a<<" "<<"FAILED";
        }
    }
}
int main()
{
    examinee a;
    a.in();
    a.out();
}