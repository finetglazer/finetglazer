#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string a, b;
        cin >> a >> b;
        string num_1 = "";
        string num_2 = "";
        if (a.length() > b.length()){
            num_1 = a;
            num_2 = b;
        }
        else if (b.length() > a.length()){
            num_1 = b;
            num_2 = a;
        }
        else{
            if (b > a){
                num_1 = b;
                num_2 = a;
            }
            else{
                num_1 = a;
                num_2 = b;
            }
        }
        int res[2000];
        for (int i = 0; i < 2000; i++)
            res[i] = 0;
        int k = num_1.length() - num_2.length();
        int redundance = 0;
        for (int i = num_1.length() - 1; i >= k; i--){
            num_1[i] -= 48;
            num_2[i - k] -= 48;
            if (redundance){
                res[i] -= 1;
                redundance = 0;
            }
            res[i] += (num_1[i] - num_2[i - k]);
            if (res[i] < 0){
                ++redundance;
                res[i] += 10;
            }
        }
        for (int i = k - 1; i >= 0; i--){
            num_1[i] -= 48;
            if (redundance){
                res[i] -= 1;
                redundance = 0;
            }
            res[i] += num_1[i];
            if (res[i] < 0){
                ++redundance;
                res[i] += 10;
            }
        }
        // if (redundance){
        //     for (int j = num_1.length(); j > 0; j--)
        //         res[j] = res[j - 1];
        //     res[0] = 1;
        // }
        // if (redundance)
        //     for (int i = 0; i < num_1.length() + 1; i++)
        //         cout << res[i];
        // else
            for (int i = 0; i < num_1.length(); i++)
                cout << res[i];
            cout << endl;
        }
    }
 