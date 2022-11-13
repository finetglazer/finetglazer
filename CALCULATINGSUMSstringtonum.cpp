#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("DATA.in");
    string str;
    long long num=0;
    long long sum=0;
   
    while(getline(in,str))
    {
        for(int i=0;i<str.length();i++)
        {
            bool check=true;
            if(str[i]>='0' && str[i]<='9')
            {
                
                int j=i;
                // string s="";
                
                while(str[j]>='0' && str[j]<='9' &&  j<str.length()) 
                {
                	
    				
                    // s+=str[j];                  
                    num = num*10 + (str[j] - '0');
                    j++;
    
                    if(num>2147483647) 
                    {
                        check=false;
                        break;
                    }
                    // cout<<num<<endl;
                }     
                i=j;      
                if (check) sum+=num;
                num=0;
            }
            if(!check) break;
        }
    }
    cout<<sum;
    in.close();
}
