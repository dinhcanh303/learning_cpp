#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m ; cin >> n >> m;
    int min = (n + 1) /2;
    int max = n;
    int k = ceil(1.00 * min / m);
    if (k <= max) cout << min << endl;
    else cout << -1 << endl;
    return 0;
}