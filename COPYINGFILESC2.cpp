#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string a;
    ifstream file;
    ofstream file1;
    file.open("PTIT.in");
    file1.open("PTIT.out");
    
    while(getline(file,a))
    {
        file1<<a<<endl;
    }  
    file.close();
    file1.close();
}