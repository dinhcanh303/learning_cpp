#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, X ; cin >> n >> X;
    int a[n];
    for(int &x : a) cin >> x;
    auto res = lower_bound(a,a+n,X);
    if(*res == X) cout << (res -a) << endl;
    else cout << -1 << endl;
    return 0;
}