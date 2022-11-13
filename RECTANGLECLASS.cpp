#include<bits/stdc++.h>
using namespace std;
class rec
{
    private:
        int x,y;
        string color;
    public:
        void in();
        int getx();
        int gety();
        string getcolor();
};
void rec::in()
{
    cin>>x>>y>>color;
    color[0]=toupper(color[0]);
    for(int i=1;i<color.size();i++)
    {
        color[i]=tolower(color[i]);
    }
}
string rec::getcolor()
{
    return color;
}
int rec::getx()
{
    return x;
}
int rec::gety()
{
    return y;
}
void dreamers(rec a)
{
    string n=a.getcolor();
    int k=a.getx();
    int l=a.gety();
    int c= 2*(k+l);
    int s= k*l;
    if(k<=0 || l<=0) cout<<"INVALID";
    else  cout<<c<<" "<<s<<" "<<n;
}
int main()
{
    rec a;
    a.in();
    dreamers(a);
}