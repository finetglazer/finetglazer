#include<bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    string idcls;
    string birth;
    float GPA;
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
string standardbirth(string a)
{
    string res;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='/')
        {
            if(i==1) a.insert(a.begin(),'0');
            if(i==4) a.insert(a.begin()+3,'0');
        }
        
    }
    res+= a;
    return res;
}

void input(Student a[], int N)
{
    for(int i=1;i<=N;i++)
    {
        getline(cin>>ws,a[i].name);
        a[i].name=standardname(a[i].name);
        cin>>a[i].idcls;
        cin>>a[i].birth;
        a[i].birth=standardbirth(a[i].birth);
        cin>>a[i].GPA;
    }
}
string standardID(int i)
{
    string a="B20DCCN";
    if(i<=9)
    {
        a+="00";
        a+=(i+'0');
    }
    if(i>=10 && i<=99)
    {
        a+='0';
        int c=i/10;
        int d=i%10;
        a+=(c+'0');
        a+=(d+'0');
    }
    return a;
}
void print(Student a[], int N)
{
    for(int i=1;i<=N;i++)
    {
        cout<<standardID(i)<<" "<<a[i].name<<" "<<a[i].idcls<<" "<<a[i].birth<<" "<<fixed<<setprecision(2)<<a[i].GPA;
        cout<<endl;
    }
}
    

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("INPUT.txt","r",stdin);
    // freopen("OUTPUT.txt","w",stdout);
    // #endif
    struct Student lst[50];

       
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}
