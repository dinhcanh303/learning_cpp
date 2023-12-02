#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
// O(logn) 
ll powMod(ll a, ll b)
{
    ll res = 1;
    a %= MOD;
    while(b != 0)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= MOD;
        }
        b /= 2;
        a *= a;
        a %= MOD;
    }
    return res;
}
int main()
{
    ll a, b; cin>> a >> b;
    cout << powMod(a, b);
}