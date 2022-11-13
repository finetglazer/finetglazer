#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("DATA.in");
    string str;
    int num=0;
    long long sum=0;
    while(getline(in,str))
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                // cout<<str[i]<<endl;
                int j=i;
                string s="";
                while(str[j]>='0' && str[j]<='9') 
                {
                    s+=str[j];
                    
                    // num = num*10 + (str[j] - '0');
                    j++;

                }
                // cout<<s<<endl;
                if(s.length()>=10) break;
                stringstream ss(s);
                ss>>num;
                i=j;
                if (num <= 2147483647) sum+=num;
                num=0;
                s="";
            }
        }
    }
   cout<<sum;
    in.close();
}
