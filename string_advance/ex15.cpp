#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    string s1;
    getline(cin,s1);
    if(s.find(s1) == string::npos) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}