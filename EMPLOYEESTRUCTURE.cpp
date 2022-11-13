#include<bits/stdc++.h>
using namespace std;
struct Employee
{
    string name,sex,birth,add,tax,constr;
};
void input(Employee &a)
{
    getline(cin,a.name);
    cin>>a.sex>>a.birth;
    cin.ignore();
    getline(cin,a.add);
    cin>>a.tax>>a.constr;
}
void print(Employee a)
{
    cout<<"00001"<<" "<<a.name<<" "<<a.sex<<" "<<a.birth<<" "<<a.add<<" "<<a.tax<<" "<<a.constr;
}
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("INPUT.txt","r",stdin);
    //     freopen("OUTPUT.txt","w",stdout);
    // #endif
    struct Employee a;
    input(a);
    print(a);
    return 0;
}