#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, u1, d; cin >> n >> u1 >> d;
    long long un = u1 + 1ll * (n-1) * d;
    long long Sn = 1ll * n * (un + u1)/2;
    cout << Sn << endl;
    return 0;
}