#include <bits/stdc++.h>
#include <cmath>
using namespace std;
using ll = long long;

bool tn(ll n)
{
    ll rev = 0;
    int v = n % 10;
    int x = 0;
    int dem = 0;
    while(n)
    {
        x = n % 10;
        dem++;
        rev = rev * 10 + x;
        n/=10;
    }
    rev /= 10;
    dem -= 1;
    rev %= (ll)pow(10,dem - 1);
    ll m = rev; 
    ll c = 0;

    while(rev)
    {
        c = c * 10 + rev % 10;
        rev/=10;
    }
    if((v == 2 * x || x == 2 * v) && (c == m)) return true;
    return false;    
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    if(tn(n)) cout << "YES";
    else cout << "NO";
}