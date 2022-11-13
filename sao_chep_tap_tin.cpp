#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in("PTIT.in");
    ofstream out("PTIT.out");
    string tok;
    while(getline(in,tok))
    {
        out<<tok<<endl;
    }
    in.close();
    out.close();
}