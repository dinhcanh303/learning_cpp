#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 +7;
int main(){
    int t; cin >> t;
    long long a = 1;
    while(t--){
        int p,e; cin >> p >> e;
        a *= (e+1) % mod;
        a %= mod;
    }
    cout << a << endl;
    return 0;
}