#include <bits/stdc++.h>
using namespace std;
string _to_string(long long a){
    stringstream ss;
    ss << a;
    return ss.str();
}
int main(){
    long long n; cin >> n;
    cout << _to_string(n) << endl;
    return 0;
}