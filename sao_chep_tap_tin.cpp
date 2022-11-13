#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in;
    ofstream out;
    in.open("PTIT.in");
    out.open("PTIT.out");
    string a;
    while(getline(in,a))
    {
        out<<a<<endl;
    }
    in.close();
    out.close();
}
