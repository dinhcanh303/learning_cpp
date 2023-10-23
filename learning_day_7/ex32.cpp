#include <bits/stdc++.h>
using namespace std;

int main(){
    int k2 ,k3 , k5 , k6 ; cin >> k2 >> k3 >> k5 >> k6;
    int min = min({k2,k5,k6});
    k2 -= min;
    int min2 = min(k2,k3);
    cout <<  1ll * min * 256 + 1ll * min2 * 32 << endl;
    return 0;
}