#include <bits/stdc++.h>
using namespace std;

bool tn(string a){
    string tmp = a;
    reverse(a.begin(), a.end());
    return tmp == a;
}
int main(){
    string s;
    getline(cin,s);
    if(tn(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}