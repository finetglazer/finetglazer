#include<bits/stdc++.h>
using namespace std;
int main()
{

    ifstream in;
    in.open("DATA.in");
    int ad[100000];
    for(int i=0;i<100000;i++) ad[i]=0;
    string a;
    int i=0;
     map<int,int> mp;
     int tmp=0;
    while(getline(in,a))
    {
        stringstream ss(a);
        string tok;
        
        while(ss>>tok)
        {
            for(int j=0;j<tok.size();j++)
            {
                ad[i]+= (tok[j]-'0');
                if(j<tok.size()-1) ad[i]*=10;
                
            }
            i++;
        }
        //17 20 25 20 15 10 24 17 25 17 22 11 23 18

    // 14 25 12 10 12 17 21 25
       
        for(int j=tmp;j<i;j++)
        {
            mp[ad[j]]++;
            
        }
        tmp=i;
    }
    for(pair<int,int> pa:mp)
        {
            cout<<pa.first<<" "<<pa.second<<endl;
        } 
    // for(int j=0;j<i;j++)
    //  cout<<ad[j]<< " ";
}
