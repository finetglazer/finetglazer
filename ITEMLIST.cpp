#include<bits/stdc++.h>
using namespace std;
struct item
{
    int order;
    string name;
    string group;
    double prices;
    double pricep;
};
double profit(double s,double p)
{
    return p-=s;
}
void in(item a[],int N)
{
    for(int i=1;i<=N;i++)
    {
        a[i].order=i;
        getline(cin,a[i].name);
        getline(cin,a[i].group);
        cin>>a[i].prices>>a[i].pricep;
        cin.ignore();
    }
}
void print(item a)
{
    cout<<a.order<<" "<<a.name<<" "<<a.group<<" "<<fixed<<setprecision(2)<<profit(a.prices,a.pricep);
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    #endif
    item lst[50];
    int n;
    cin>>n;
    cin.ignore();
    int k=1;
    in(lst,n);
    set<double> st;
    for(int i=1;i<=n;i++)
    {
        st.insert(profit(lst[i].prices,lst[i].pricep));
    }
    vector<double> vv;
    for(double x:st)
    {
        vv.push_back(x);
    }
    for(int i=vv.size()-1;i>=0;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(profit(lst[j].prices,lst[j].pricep)==vv[i])
            {
                print(lst[j]);
                cout<<endl;
                break;
            }
        }
    }

}