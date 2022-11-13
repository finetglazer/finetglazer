#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <queue>
#include <cstring>
#include <bitset>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    ifstream in;
    ofstream out;
    in.open("PTIT.in");
    out.open("PTIT.out");
    while(in.eof()==false)// khi tro ve cuoi file no se la true
    {
        getline(in,a);
        out<<a<<endl;
    }  
    in.close();
    out.close();
}