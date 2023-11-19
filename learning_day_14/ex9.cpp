#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m ,k; cin >> n >> m >> k;
    long long ans = 1;
    for(int i = 1; i < n; i++){
        ans *= m % 10^k;
        ans %= 10^k;
    }
    cout << ans << endl;
    return 0;
}