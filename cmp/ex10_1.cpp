#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, X ; cin >> n >> X;
    int a[n];
    for(int &x : a) cin >> x;
    auto it = lower_bound(a, a+n,X);
    auto it2 = upper_bound(a, a+n,X);
    if(it == a+n) cout << -1 << endl;
    else cout << (it -a) << endl;
    if(it2 == a+n) cout << -1 << endl;
    else cout << (it2 -a) << endl;
    return 0;
}