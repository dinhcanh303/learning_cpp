#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long mod = 1e9 + 7;
    long long gt = 1;
    for(int i = 1; i <= n; i++){
        gt *= i % mod;
        gt %= mod;
        cout << gt << endl;
    }
    return 0;
}