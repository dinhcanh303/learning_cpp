#include <bits/stdc++.h>

using namespace std;

int main(){
    int k2,k3,k5,k6; cin >> k2 >> k3 >> k5 >> k6;
    int min256 = min({k2,k5,k6});
    cout << 1ll * min256 * 256 + 1ll * min(k3,(k2- min256)) *32 << endl;
    return 0;
}