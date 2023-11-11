#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int dem(int n){
    ll res=1;
    while (n--){
        int n,p; cin>>n>>p;
        res *= (p + 1);
        res %= MOD;
    }
    return res;
}

int main() {
    int n;
    cin>>n;
    cout<<dem(n);
}