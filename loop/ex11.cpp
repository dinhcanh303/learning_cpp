#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int n; cin >> n;
    ll sum = 0;
    if(n % 2 == 0) cout << n / 2 << endl;
    else cout << n / 2 - n << endl;
    return 0;
}