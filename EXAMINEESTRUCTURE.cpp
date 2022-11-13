#include<bits/stdc++.h>
using namespace std;
struct Examinee
{
    string name;
    string birth;
    float x,y,z;
};
void input(Examinee &a)
{
    getline(cin,a.name);
    // cin.ignore();
    cin>>a.birth;
    cin>>a.x>>a.y>>a.z;
}
void print(Examinee a)
{
    float tong=a.x + a.y + a.z;
    cout<<a.name<<" "<<a.birth<<" "<<fixed<<setprecision(1)<<tong;
}
int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}