#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}
int main()
{
    int x, y, z , n ; cin >> x >> y >> z >> n;
    ll b = lcm(lcm(x, y), z);
    ll a = pow(10, n - 1); // so nho nhat co n chu so
    ll tmp = pow(10, n) - 1; // so lon nhat co n chu so
    
    ll r = (a + (b - 1)) / b * b; // so nho nhat lon hon a chia het b; x >= a
    if(r <= tmp) cout << r;
    else cout << -1;
}