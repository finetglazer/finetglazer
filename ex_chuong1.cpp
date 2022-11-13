// #include <iostream>
// using namespace std;
// #define ll long long
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//             ll a, b;
//             cin >> a >> b;
//             cout << __gcd(a, b) << " " << a * b / __gcd(a, b) << endl;
//     }
// }
 
 
                                                                                        // Bai 2
 
// #include <iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//             string a;
//             cin >> a;
//             a[0] == a[a.size() - 1] ? cout << "YES" : cout << "NO";
//             cout << endl;
//    }
// }
 
                                                                                        // Bai 3
 
// #include <iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//             int n;
//             cin >> n;
//             vector <int> a(n);
//             for (int i = 0; i < n; ++i) cin >> a[i];
//             vector <int> b(a);
//             reverse (b.begin(), b.end());
//             bool ok = true;
//             for (int i = 0; i < n; ++i)
//                     if (a[i] != b[i]) ok = false;
//             ok ? cout << "YES" : cout << "NO" << endl;
//     }
// }
 
                                                                                //  Bai 4
 
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int t, k = 0;
//     cin >> t;
//     while (t--){
//             int n;
//             cin >> n;
//             ++k;
//             cout << "Test " << k << ":";
//             int count = 0;
//             while (!(n % 2)) n /= 2, ++count;
//             if (count) cout << 2 << "(" << count << ") "; 
//             for (int i = 3; i <= sqrt(n); i += 2){
//                     if (!(n % i)){
//                             count = 0;
//                             while (!(n % i)) ++count, n /= i;
//                             cout << i << "(" << count << ") ";
//                     }
//             }
//             if (n > 1) cout << n << "(1)";
//             cout << endl; 
//     }
// }
 
                                                                                        //  Bai 5
 
// #include <iostream>
// using namespace std;
// int main(){
//     string a;
//     getline(cin, a);
//     (a[0]  - '0') + (a[4] - '0') == (a[a.size() - 1] - '0') ? cout << "YES" : cout << "NO";
// }
 
 
                                                                                        // Bai 6
 
// #include <iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//             string a;
//             cin >> a;
//             bool ok = true;
//             for (int i = 1; i < a.size()  - 1; ++i)
//                     if ((a[i] >= a[i - 1] and a[i] <= a[i + 1]) or (a[i] <= a[i - 1] and a[i] >= a[i + 1])) continue;
//                     else ok = false;
//             ok ? cout << "YES" : cout << "NO"; 
//             cout << endl;
//     }
// }
 
                                                                                        // Bai 7
 
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--){
//             string a;
//             getline(cin, a);
//             for(int i = 1; i < b.size(); ++i){
//                     for (int j = 0; j < b[i].size(); ++j){
//                             b[i][j] = tolower(b[i][j]);
//                             if (!j) cout << char(b[i][j] - 32);
//                             else cout << b[i][j];
//                     }
//                     cout << " ";
//             }
//             cout << endl;
//     }
// }
 
 
 
 
                                                                                        //  Bai 8
 
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--){
//             string a;
//             getline(cin, a);
//             vector<string> b;
//             stringstream ss;
//             ss << a;
//             string t;
//             while (ss >> t){
//                     b.push_back(t);
//             }
//             for(int i = 1; i < b.size(); ++i){
//                     for (int j = 0; j < b[i].size(); ++j){
//                             b[i][j] = tolower(b[i][j]);
//                             if (!j) cout << char(b[i][j] - 32);
//                             else cout << b[i][j];
//                     }
//                     i != b.size() - 1 ? cout << " " : cout << ",";
//             }
//             for (int i = 0; i < b[0].size(); ++i){
//                     b[0][i] = toupper(b[0][i]);
//                     cout << b[0][i];
//             }
//             cout << endl;
//     }
// }
 
 
                                                                                        // Bai 9
 
// #include <iostream>
// using namespace std;
// int main(){
//     string a;
//     cin >> a;
//     int ans = 0;
//     for (int i = 0; i < a.size() - 1; ++i)
//             if (a[i] != a[i + 1]) ++ ans;
//     cout << ans / 2;
// }
 
 
                                                                                        // Bai 10
                                                                               
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//             int  n;
//             cin >> n;
//             int ans = 0;
//             for (int i = 1; i <= sqrt(n); ++i){
//                     if (!(n % i)){
//                             if (!(i % 2)) ++ans;
//                             if (!((n/i) % 2) and n/i != i) ++ans;
//                    }
//             }
//             cout << ans << endl;
//     }
// }