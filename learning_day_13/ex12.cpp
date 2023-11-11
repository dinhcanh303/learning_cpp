#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    ll n; cin >> n;
    int p; cin >> p;
    ll ans = 0;
    for(ll i = p; i <= n; i *=p){
        ans += n / i;
    }
    cout << ans;
}