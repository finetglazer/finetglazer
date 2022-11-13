#include<bits/stdc++.h>
// 
using namespace std;
#define MAX 150
struct Student
{
    string name;
    string id ;
    string ID;
    string birth;
    float GPA;
};
string rform(string a)
{
    stringstream ss(a);
    string tok;
    vector<string> v;
    string kk;
    while(ss>>tok)
    {
        for(int i=0;i<tok.size();i++)
        {
            if(i==0) tok[i]=toupper(tok[i]);
            else tok[i]=tolower(tok[i]);
            
        }
        v.push_back(tok);
    }
    for(int i=0;i<v.size();i++)
    {
        kk+= v[i][0];
        for(int j=1;j<v[i].size();j++)
        {
            kk += v[i][j] ;
        }   
        if(i<v.size()-1)  kk+= " ";
    }
    return kk;
}
void input(Student a[],int N)
{
    for(int i=0;i<N;i++)
    {
        getline(cin >> ws, a[i].name);
        a[i].name = rform(a[i].name);
        getline(cin >> ws, a[i].ID);
        getline(cin >> ws, a[i].birth);
        cin>>a[i].GPA;
        
    }
}
void print(Student a[],int N)
{
    
    for(int j=0;j<N;j++)
    {    
        string a[j].id="B20DCCN";
        if(j+1<=9)
        {
            a[j].id += "00";
            cout<<a[j].id<<j<<" ";
        } 
        if(j+1>=10 && j+1 <100) 
        {
            a[j].id += "0";
            cout<<a[j].id<<j<<" ";
        }
        cout<<a[j].name<<" "<<a[j].ID<<" ";
        for(int i=0;i<a[j].birth.size();i++)
        {
            if(a[j].birth[i]=='/')
            {
                if(i==1) a[j].birth.insert(a[j].birth.begin(),'0');
                if(i==4) a[j].birth.insert(a[j].birth.begin()+3,'0');
            }
        }
        cout<<a[j].birth<<" "<<fixed<<setprecision(2)<<a[j].GPA;
        cout<<endl;
    }
    
} 

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("INPUT.txt","r",stdin);
    //     freopen("OUTPUT.txt","w",stdout);
    // #endif
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}