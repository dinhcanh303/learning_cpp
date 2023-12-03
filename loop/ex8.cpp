#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    ll n; cin >> n;
    for(int i = 1; i <= sqrt(n); i++){
        cout << 1ll * i * i << " ";
    }
    return 0;
}