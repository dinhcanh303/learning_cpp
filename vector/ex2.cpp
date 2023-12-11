#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int a,b,c; cin >> a >> b >> c;
    ll sum = 1ll * a + (b + c) + 1ll * b * (a +c);
    cout << sum << endl;
    return 0;
}