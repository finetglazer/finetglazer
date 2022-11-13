#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in("DATA.in");
    string tok;
    long long sum=0;
    while(in>>tok)
    {
        for(int i=0;i<tok.size();i++)
        {
            bool d=true;
            long long num=0;
            while(tok[i]>='0' && tok[i]<='9')
            {
                num+=(tok[i]-'0');
                if(i!=tok.size()-1) num*=10;
                i++;
                if(num>2147483647) d=false;
            }
            if(d) sum+=num;
            break;
        }

        
    }
    cout<<sum;
    in.close();
}