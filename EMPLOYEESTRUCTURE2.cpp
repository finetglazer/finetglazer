
#include<bits/stdc++.h>
using namespace std;
struct Employee
{
    string name;
    string sex;
    string add;
    string fax;
    string day;
    string birth;
};
string standardname(string a)
{
    vector<string> res;
    stringstream ss(a);
    string k;
    while(ss>>k)
    {
        res.push_back(k);
    }
    string re;
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            if(j==0) res[i][j]=toupper(res[i][j]);
            if(j!=0) res[i][j]=tolower(res[i][j]);
        }
        re+=res[i];
        if(i<res.size()-1) re+=" ";
    }
    return re;
}
string standardID(int i)
{
    string a="000";
    if(i<=9) 
    {
        a+='0';
        a+=(i+'0');
    }
    if(i>=10 && i<=99)
    {
        int k=i/10;
        int j=i%10;
        a+=(k+'0');
        a+=(j+'0');
    }
    return a;
}
void input(Employee &a)
{
    cin.ignore();
    getline(cin,a.name);
    a.name=standardname(a.name);
    cin>>a.sex;
    cin>>a.birth;
    cin.ignore();
    getline(cin,a.add);
    cin>>a.fax;
    cin>>a.day;
}
void printlist(Employee a[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout << standardID(i+1)<<" "<< a[i].name<<" "<<a[i].sex;
        cout<<" "<<a[i].birth<<" "<<a[i].add<<" "<<a[i].fax<<" "<<a[i].day;
        cout<<endl;
    }
    
}
int main(){
        #ifndef ONLINE_JUDGE
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    #endif
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}