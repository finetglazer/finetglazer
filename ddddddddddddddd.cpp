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
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef long long ll;
const int MOD = 1000000007; 
typedef long double ld;
#define db(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FORAB(i, a, b) for (int i=a; i<(b); i++)
#define FOR(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
using namespace std;
 
 
bool cmp(string a, string b)
{
    return a < b;
}
 
int main(){
	string s;
	map<string,int> file1, file2;
	ifstream input1,input2;
    input1.open("DATA1.in");
    input2.open("DATA2.in");
    vector<string> day1, day2;
    while(input1 >> s) {
        for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
        if (!file1[s]) day1.pb(s);
        file1[s]++;
    }
 
 
    while(input2 >> s) {
        for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
        if (!file2[s]) day2.pb(s);
        file2[s]++;
    }
 
    sort(day1.begin(), day1.end());
    sort(day2.begin(), day2.end());
 
    for (int i = 0; i < day1.size(); i++) {
        if (!file2[day1[i]]) {
            cout << day1[i] << " ";
            // file2[day1[i]]++;
        }
    }
    cout << endl;
    for (int i = 0; i < day2.size(); i++) {
        if (!file1[day2[i]]) {
            cout << day2[i] << " ";
            // file1[day2[i]]++;
        }
    }
 
 
 
}